#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int n()
{
    return (system("/bin/cat /home/user/level7/.pass"));
}

void m()
{
    return(puts("Nope"));
}

int main(int argc, char **argv)
{
    (void)argc;
    char *buffer;
    void (**ft)(void);

    buffer = malloc(64);
    ft = malloc(4);

    *ft = m;

    strcpy(buffer, argv[1]);
    (*ft)();

    return 0;
}
