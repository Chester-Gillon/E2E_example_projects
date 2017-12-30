/*
 *  ======== main.c ========
 */

#include <xdc/std.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Assert.h>

#include <ti/sysbios/BIOS.h>

#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Mailbox.h>

#include <stdlib.h>

/** Message passed in mailbox from the writer to reader task */
typedef struct
{
    /* The size of data_words */
    UInt num_data_words;
    /* Dynamically allocated array of test data */
    UInt *data_words;
    /* The initial value of an incrementing test pattern in data_words */
    UInt data_word_pattern_start;
} inter_task_message;

/** The maximum data_words array size in an inter_task_message */
#define MAX_DATA_WORDS 256

/** The maximum number of messages which can be queued for a reader task.
 *  Given that the data words of each message are dynamically allocated this value must not allow the heap to become full */
#define MAX_QUEUED_MESSAGES 5

static Mailbox_Handle inter_task_mailbox;

Void write_task (UArg a0, UArg a1)
{
    inter_task_message msg;
    UInt data_index;
    UInt data_word_pattern = 0;

    for (;;)
    {
        msg.num_data_words = rand () % MAX_DATA_WORDS;
        msg.data_words = malloc (msg.num_data_words * sizeof (UInt));
        msg.data_word_pattern_start = data_word_pattern;
        for (data_index = 0; data_index < msg.num_data_words; data_index++)
        {
            msg.data_words[data_index] = data_word_pattern;
            data_word_pattern++;
        }

        Mailbox_post (inter_task_mailbox, &msg, BIOS_WAIT_FOREVER);
    }
}

Void read_task (UArg a0, UArg a1)
{
    inter_task_message msg;
    UInt data_index;
    UInt data_word_pattern;
    UInt num_messages = 0;
    UInt num_data_pattern_errors = 0;

    for (;;)
    {
        Bool display_output = FALSE;

        Mailbox_pend (inter_task_mailbox, &msg, BIOS_WAIT_FOREVER);
        data_word_pattern = msg.data_word_pattern_start;
        for (data_index = 0; data_index < msg.num_data_words; data_index++)
        {
            if (msg.data_words[data_index] != data_word_pattern)
            {
                num_data_pattern_errors++;
                display_output = TRUE;
            }
            data_word_pattern++;
        }
        free (msg.data_words);

        num_messages++;
        if ((num_messages % 10000) == 0)
        {
            display_output = TRUE;
        }

        if (display_output)
        {
            System_printf ("num_messages=%u  num_data_pattern_errors=%u\n", num_messages, num_data_pattern_errors);
            System_flush ();
        }
    }
}

/*
 *  ======== main ========
 */
Int main()
{ 
    Task_Params task_params;
    Task_Handle task;
    Error_Block eb;

    /* Create the mailbox used to send messages between tasks */
    Error_init(&eb);
    inter_task_mailbox = Mailbox_create (sizeof (inter_task_message), MAX_QUEUED_MESSAGES, NULL, &eb);
    Assert_isTrue (inter_task_mailbox != NULL, NULL);

    Task_Params_init (&task_params);
    task_params.affinity = 0;
    task = Task_create (read_task, &task_params, &eb);
    Assert_isTrue (task != NULL, NULL);

    task_params.affinity = 1;
    task = Task_create (write_task, &task_params, &eb);
    Assert_isTrue (task != NULL, NULL);

    BIOS_start();    /* does not return */
    return(0);
}
