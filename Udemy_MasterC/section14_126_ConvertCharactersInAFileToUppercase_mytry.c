#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fpOrigin = NULL;
    FILE *fpTemp = NULL;

    char letter;


    fpOrigin = fopen("file.txt", "r");
    if (!fpOrigin) {
        perror("error");
        return -1;
    }

    fpTemp = fopen("temp.txt", "w+");
    if (!fpTemp) {
        perror("error");
        return -1;
    }

    while ((letter = fgetc(fpOrigin)) != EOF) {
        if (islower(letter) != 0) {
            letter = letter - 32;
        }
        fputc(letter, fpTemp);
    }

    fclose(fpOrigin);
    fpOrigin = NULL;
    fclose(fpTemp);
    fpTemp = NULL;

    rename("temp.txt", "file.txt");

    fpOrigin = fopen("file.txt", "r");
    if (!fpOrigin) {
        perror("error");
        return -1;
    }

    char line[50];

    while (fgets(line, 100, fpOrigin) != NULL) {
        printf("%s", line);
    }
    
    
    fclose(fpOrigin);
    fpOrigin = NULL;
    
    return 0;
}