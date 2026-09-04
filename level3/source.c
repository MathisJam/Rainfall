#include <stdio.h>
#include <stdlib.h>

int v()
{
    char buffer[512];
    char *str;
    str = fgets(buffer, sizeof(buffer), stdin);

    int i;
    i = printf("\n");
    if (64 == i)
    {
        system("/bin/sh");
        char *wait = "Wait what ?!\n";
        fwrite(wait, sizeof(wait), sizeof(wait), stdin);
    }
    return 0;
}

int main ()
{
    v();
    return 0;
}
