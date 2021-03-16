/* Not completed as of 2021-03-17. Will be updated after studying a few more lessons.*/


#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>

int main()
{
    int pipe_ptoc[2];
    int pipe_ctop[2];
    char msgtochild[] = "How are you child?";
    char msgtoparent[] = "I'm fine, parent!";
    char msgstore[20];

    int pid;

    if (pipe(pipe_ptoc) == -1) {
        printf("pipe_ptoc creation error");
        exit(1);
    }

    if (pipe(pipe_ctop) == -1) {
        printf("pipe_ctop creation error");
        exit(1);
    }

    if ((pid = fork()) < 0) {
        printf("fork creation error");
        exit(1);
    }
    else if (pid > 0) {
        close(pipe_ptoc[0]);
        close(pipe_ctop[1]);

        write(pipe_ptoc[1], msgtochild, sizeof(msgtochild));
        read(pipe_ctop[0], msgstore, sizeof(msgstore));
        printf("Parent got message from its child as follows: %s\n", msgstore);

        return 0;
    }
    else {
        close(pipe_ptoc[1]);
        close(pipe_ctop[0]);

        read(pipe_ptoc[0], msgstore, sizeof(msgstore));
        printf("child got message from its parent as follows: %s\n", msgstore);
        write(pipe_ctop[1], msgtoparent, sizeof(msgtoparent));

        return 0;
    }
}