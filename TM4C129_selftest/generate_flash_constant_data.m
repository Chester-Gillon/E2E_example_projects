% Generate a C source file which contains a constant array of pseudo-random
% data which is to be placed in flash. This allows the flash to be tested
% by reading a known test pattern.
function generate_flash_constant_data
    % Use 90% of the 1Mbyte flash
    flash_data_num_words = 235929;
    
    seed = uint64(rand(1) * 2^32);

    % Write the include file
    fid = fopen ('flash_pseudo_random_data.h','w');
    fprintf (fid,'/* This file was automatically generated by generate_flash_constant_data.m */\n');
    fprintf (fid,'#define FLASH_DATA_NUM_WORDS %u\n',flash_data_num_words);
    fprintf (fid,'#define FLASH_DATA_INITIAL_SEED %u\n',seed);
    fprintf (fid,'extern const uint32_t flash_constant_data[FLASH_DATA_NUM_WORDS];\n');
    fclose (fid);
    
    % Write the source file
    num_words_per_line = 10;
    fid = fopen ('flash_pseudo_random_data.c','w');
    fprintf (fid,'/* This file was automatically generated by generate_flash_constant_data.m */\n');
    fprintf (fid,'#include <stdint.h>\n');
    fprintf (fid,'#include "flash_pseudo_random_data.h"\n');
    fprintf (fid,'const uint32_t flash_constant_data[FLASH_DATA_NUM_WORDS]=\n');
    fprintf (fid,'{\n');
    for data_index=1:flash_data_num_words
        col = mod (data_index-1,num_words_per_line) + 1;
        if col == 1
            fprintf (fid, '   ');
        end
        fprintf (fid,' 0x%08x,', seed);
        if col == num_words_per_line
            fprintf (fid,'\n');
        end
        
        % Need to use the same pseudo-random number sequence as expected by
        % the TM4C129_self_test.c program to allow the data sequence to be
        % checked
        seed = mod(seed * uint64(1664525),uint64(2^32));
        seed = mod(seed + uint64(1013904223),uint64(2^32));
    end
    if (col ~= num_words_per_line)
        fprintf (fid,'\n');
    end
    fprintf (fid,'};\n');
    fclose (fid);
end

