#define _GNU_SOURCE
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int res = 0;
    (void)argc;
    char *args[2];


    res = atoi(argv[1]);
    if (res != 423)
    {
        fwrite("No !\n", 5, 1, stderr);
    }
    else
    {
        args[0] = strdup("/bin/sh");
        args[1] = NULL;

        gid_t gid = getegid();
        uid_t uid = geteuid();
        setresuid (uid, uid, uid);
        setresgid (gid, gid, gid);

        execv("/bin/sh", args);
    }
}
