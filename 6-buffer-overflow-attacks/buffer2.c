#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int copytobuffer(char* input)
{
     char buffer[15];
     strcpy (buffer,input);
     return 0;
}

void letsprint()
{
    printf("Hey!! , you succeeded\n");
    exit(0);
}

void main (int argc, char *argv[])
{
    int local_variable = 1;
    copytobuffer(argv[1]);
    exit(0);
}
