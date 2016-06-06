#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
 
int main(void)
{
    puts("About to call shared library.");
    hello();
    puts("About to create string from shared library.");
    char *s;
    s = (char*)malloc(256*sizeof(char));
    createString(&s);
    printf("Created string %s\n", s);
    free(s);
    return 0;
}
