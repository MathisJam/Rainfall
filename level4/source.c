#include <stdio.h>
#include <stdlib.h>
int m;

char*p(char* buffer)
{
    return printf(buffer);
}

int n()
{
    char buffer[512];
    fgets(buffer, 512, stdout);
    p(buffer);
    if (16930116 == m)
        return system("/bin/cat /home/user/level5/.pass");
}

int main()
{
    n();
    return 0;
}
