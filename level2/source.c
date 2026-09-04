#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>

char *p()
{
    char buffer[76];
    unsigned int ret;

    ret = (unsigned int)(uintptr_t)__builtin_return_address(0); // builtin = void * -> uintptr_t = entier (taille de l'adresse) -> unsigned int -> entier 32 bits

    fflush(stdout);
    gets(buffer); // deprecated donc faut utiliser fgets pour compiler : fgets(buffer, sizeof(buffer), stdin)
    char *dup;

    if ((ret & 0xb0000000) == 0xb0000000)
    {
        printf("(%p)\n", (void *)(uintptr_t) ret); // sens inverse, on cast en entier (taille adresse) puis en void * car c'est ce aue %p demande
        exit(1);
    }
    puts(buffer);

    dup = strdup(buffer);
    return dup;

}

int main()
{
    p();
    return(0);
}
