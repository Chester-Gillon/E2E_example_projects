/*
 * main.c
 */

#include <stdlib.h>

#include "child_class.h"
#include "master_class.h"

MasterClass* m_pMaster;                        // global MasterClass* generate by a new (heap)
MasterClass m_pMasterPlat;                    // global Masterclass generate in the .bss segment (pInit zone)

int main(void) {
    if (m_pMaster == NULL)
    {
        m_pMaster = new MasterClass();    // allocate it in the heap zone
    }

    m_pMaster->masterValue = 5;
    m_pMasterPlat.masterValue = 10;

	return 0;
}
