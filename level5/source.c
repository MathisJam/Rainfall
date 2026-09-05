#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int o(){
    system("/bin/sh");
    exit(1);
}

int n(){
    char buffer[512];
    fgets(buffer, 512, stdout);
    printf(buffer);
    exit(1);
}

int main()
{
    n();
    return 0;
}
