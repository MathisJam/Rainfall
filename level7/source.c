#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char c[68];

int m(){
    time_t t;
    t = time(NULL);
    printf("%s - $d\n", c ,t );
}

int main(int argc, char **argv) {
    int* p1;
    int* p2;
    int* p3;
    int* p4;


    p1 = malloc(8);
    p1[0] = 1;

    p2 = malloc(8);
    p1[1] = p2;

    p3 = malloc(8);
    p3[0] = 2;

    p4 = malloc(8);
    p3[1] = p4;

    strcpy(p2, argv[1]);
    strcpy(p4, argv[2]);

    FILE * file;
    file = fopen("/home/user/level8/.pass", "r");

    fgets(c, 68, file);
    puts("~~");
}
