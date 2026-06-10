#include <stdio.h>
#include <string.h>

#include "filetool.h"

void print_usage(){
    printf("Usage:\n");
    printf("  filetool cat <file>\n");
    printf("  filetool ls <dir>\n");
    printf("  filetool du <path>\n");
    printf("  filetool cp <src> <dst>\n");
}

#define CAT "cat"
#define LS "ls"
#define CP "cp"
#define DU "du"

int main(int argc, char const *argv[])
{
    printf("argc len is %d \n", argc);
    if (argc < 2) {
        print_usage();
        return 1;
    }
    if (strcmp(argv[1], CAT) == 0){
        printf("cat\n");
    }
    if (strcmp(argv[1], LS) == 0){
        file_ls();
        printf("ls\n");
    }
    if (strcmp(argv[1], CP) == 0){
        printf("cp\n");
    }
    if (strcmp(argv[1], DU) == 0){
        printf("du\n");
    }
    return 0;
}
