#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main()
{
    pid_t pid;

    if ((pid = fork()) < 0) {
        exit(0);
    }
    else if (pid == 0) {
        /* wait(NULL); */
        exit(0);
    }

    int w = wait(NULL);
    printf("%d\n", w);
    printf("child pid: %d\n", pid);
    printf("parent pid: %d\n", getpid());
}