#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    pid_t pid;

    if ((pid = fork()) < 0) {
        exit(0);
    }    
    
    else if (pid == 0) {
        close(STDOUT_FILENO);
        printf("child test print\n");
    }
    
    printf("parent test print\n");
    return 0;
}