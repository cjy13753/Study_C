#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


#define MAX_LINE_LENGTH 1000
#define MAX_ARGS 128

int parseline(char *buf, char **argv);
int evaluate(char *cmdline, char **argv);
int checkBulitInCommands(char **argv);

int main()
{
    char cmdline[MAX_LINE_LENGTH];
    char *argv[MAX_ARGS];
    
    while (1) {
        printf("> ");
        fgets(cmdline, MAX_LINE_LENGTH, stdin);
        evaluate(cmdline, argv);
        // for (int i = 0; argv[i] != NULL; i++) { // test
        //     printf("%s\n", argv[i]);
        // }
    }
}

int checkBulitInCommands(char **argv) {
    int status;

    if (strncmp("quit", argv[0], 4) == 0) {
        exit(0);
    }

    status = 0;

    return status;
}        



int parseline(char *buf, char **argv) {
    
    int argc = 0;
    char *delimiter;
    
    /* Replacing trailing newline feed with whitespace */
    delimiter = strchr(buf, '\n');
    *delimiter = ' ';

    /* Ignoring trailing whitespaces */
    while (*buf == ' ') {
        ++buf;
    }
    delimiter = buf;

    while (delimiter = strchr(buf, ' ')) {
        argv[argc++] = buf;
        buf = delimiter + 1;
        while (*buf == ' ') {
            ++buf;
        }
        *delimiter = '\0';
    }
    argv[argc] = NULL;
    
    return --argc;
}

int evaluate(char *cmdline, char **argv) {
    int bg = 0;
    int argc; /* The last index number of argv */
    pid_t pid;
    int status;
    
    argc = parseline(cmdline, argv);

    checkBulitInCommands(argv);

    if ((pid = fork()) == 0) {
        if (pid < 0) {
            printf("Fork error\n");
            exit(0);
        }
        if (execve(argv[0], argv, __environ) < 0) {
            printf("execve error\n");
            exit(0);
        }
    }

    if (*argv[argc] == '&') {
        bg = 1;
    }

    if (!bg) {
        waitpid(pid, &status, 0);
    }
    
    else {
        printf("%d %s\n", pid, cmdline);
    }


    return bg;
}


/*
int evaluate (char *cmdline, char **argv)
    parse the commandline
        ignore leading whitespaces
        replace trailing newline feed with whitespace
        replace whitespace right after each argument with null character
    put each argument in an array of strings passed by reference
    if the first argument is a built-in command
        execute the built-in commnad
    else
        return whether the program is needed to be run in the foreground or background in integer

in main after returning from evaluate
    fork and execve to create and run the requested program
    if child process is run in foreground
        parent process waitpid
    else
        parent process prints child process's pid and its associated command line and iterates its while loop
*/

