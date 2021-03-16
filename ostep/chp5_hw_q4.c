#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t pid;

    if ((pid = fork()) < 0) {
        exit(0);
    }
    else if (pid == 0) {
        printf("fork created");
        char *argv[2];
        argv[0] = "/bin/ls";
        argv[1] = NULL;
        execv(argv[0], argv);
    }


    return 0;
}