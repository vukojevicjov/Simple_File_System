#include <string.h>

#define MAX_FILE_NAME_LENGTH 50

struct fileIdentificator_st {
    char fileName[MAX_FILE_NAME_LENGTH];
    void *fileDescriptorAddr;    
};

struct physicalFileAddress_st {
    void *fileAddress;
    int fileLength;
};

typedef struct FCB_st {
    fileIdentificator fi;
    physicalFileAddress pfaddr;

    // information about permissions
} fileControlBlock_st;

int init_fileIdentificator(fileIdentificator_st *, char *);
int init_physicalFileAddress(physicalFileAddress *);
int init_fileControlBlock(fileControlBlock_st *, char *);