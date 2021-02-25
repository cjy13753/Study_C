#include <stdio.h>

int main()
{
    FILE *pfile;
    char letter;
    int counter = 0;

    pfile = fopen("file.txt", "r");
    if (!pfile) {
        perror("file opening error");
        return -1;
    }

    while ((letter = fgetc(pfile)) != EOF) {
        if (letter == '\n') {
            counter++;
        }
    }

    fclose(pfile); // Forgot this
    pfile = NULL; // Forgot this

    printf("%d\n", counter);

}