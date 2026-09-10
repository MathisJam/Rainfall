#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * auth = NULL;
char * service = NULL;

int main(){


    char input[128];
    while(1)
    {
        printf("%p, %p \n", auth, service);

        if (fgets(input, 128, stdin) == 0)
            return ;

        if (strncmp(input, "auth ", 5) == 0)
        {
            auth = malloc(4);
            *auth = 0;
            if (strlen(input + 5) <= 30)
                strcpy(auth, input +5);
        }

        if (strncmp(input, "reset", 5) == 0)
            free(auth);

        if (strncmp(input, "service", 6) == 0)
            service = strdup(input + 7);

        if (strncmp(input, "login", 5) == 0)
        {
            if (*(auth + 0x20 ) != 0)
                system("/bin/sh");
            else
                fwrite("Password:\n", 1, 10, stdout);
        }
    }
}
