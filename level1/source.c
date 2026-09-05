#include <stdio.h>
#include <stdlib.h>

int run ()
{
    fwrite("Good... Wait what?", 19, 1, stdout);
    return(system("/bin/sh"));
}

int main()
{
    char buffer[64];
    gets(buffer); // deprecated donc faut utiliser fgets pour compiler : fgets(buffer, sizeof(buffer), stdout)
    return 0;
}
