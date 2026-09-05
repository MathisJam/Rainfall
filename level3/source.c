#include <stdio.h>
#include <stdlib.h>

int m;

int v()
{
    char buffer[512];

    fgets(buffer, 512, stdin);
    printf(buffer);
    if (64 == m)
    {
        system("/bin/sh");
        char *wait = "Wait what ?!\n";
        fwrite("Wait what ?!\n", 12, 1, stdout);
    }
    return 0;
}

int main ()
{
    v();
    return 0;
}
