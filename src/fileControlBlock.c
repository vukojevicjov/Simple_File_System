#include "fileControlBlock.h"

int init_fileIdentificator(fileIdentificator_st *fi, char *fname){
    {
        int length = 0;
        while(fname[length] != '\0')
            length++;

        if (length >= MAX_FILE_NAME_LENGTH)
            return 1;
    }

    strcpy(fi->fileName, fname);
    fi->fileDescriptorAddr = 0;
    // Implement algo for descriptor allocation
    return 0;
}

int init_physicalFileAddress(physicalFileAddress *pfa) {
    pfa->fileAddress = 0;
    pfa->fileLength = 0;
    // Implement algo for address allocation and file length determination
    return 0;
}

int init_fileControlBlock(fileControlBlock_st *fcb, char *fname) {
    if (init_fileIdentificator(&(fcb->fi), fname) == 1) {
        printf("ERROR: Initialising file identificator failed...\n");
        return 1;
    }

    if (init_physicalFileAddress(&(fcb->pfaddr)) == 1) {
        printf("ERROR: Initialising file physical address failed...\n");
        return 1;
    }

    return 0;
}