#include <stdlib.h>
#include <stdio.h>

#include "include/lexer.h"

void usage()
{
    printf(" usage : barry <filename> \n");
    exit(1);

}

int main(int argc, char **argv)
{
    char *filename;
    uint8_t *program;

    if(argc != 2)
    {
        usage();
    } 
    filename = argv[1];
    program = read_file(filename);
    printf(" %s\n", program);

    // free(program);
    return 0;
}
