#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <wait.h>
#include <fcntl.h>

int main()
{
    pid_t pid_child1;
    pid_t pid_child2;
    
    if ((pid_child1 = fork()) < 0) {
        printf("fork error\n");
        exit(0);
    }
    else if (pid_child1 == 0) {
        int pipedes[2];
        
        close(STDIN_FILENO);
        close(STDOUT_FILENO);

        if (pipe(pipedes) != 0) {
            printf("pipe error\n");
            exit(0);
        }

        if ((pid_child2 = fork()) < 0) {
            printf("pid_child2 fork error\n");
            exit(0);
        }
        else if (pid_child2 == 0) {
            printf("testtest\n");
        }
        else {
            wait(NULL);
            char string[10];

            scanf("%s", string);

            FILE *fs = fopen("test.txt", "w");
            fprintf(fs, string);
            exit(0);

        }


    }
    return 0;
}