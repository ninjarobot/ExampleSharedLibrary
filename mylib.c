#include <stdio.h>
#include <string.h> 
 
void hello(void)
{
    puts("Hello from library");
}

void createString(char **s) 
{
    strcpy(*s, "abcdefghi");
}
