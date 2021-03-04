#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv, char **envp)
{
    int i;
    
    printf("Command-line arguments:\n");
    for (i = 0; argv[i] != NULL; i++) {
        printf("\targv[%.1i]: %s\n", i, argv[i]);
    }

    printf("Enrionment variables:\n");
    for (i = 0; envp[i] != NULL; i++) {
        printf("\tenvp[%.1i]: %s\n", i, envp[i]);
    }
}