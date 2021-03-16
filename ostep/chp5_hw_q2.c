#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    close(STDOUT_FILENO);
    int fd = open("./test.txt", O_CREAT|O_WRONLY|O_TRUNC);
    pid_t pid;

    if ((pid = fork()) < 0) {
        exit(0);
    }
    else if (pid == 0) {
        printf("child log: %d\n", fd);
        exit(0);
    }

    printf("parent log: %d\n", fd);

    return 0;
}