#include <stdio.h>

void writingCharactersToATextFile(void);
void writingAStringToATextFile(void);
void writingFormattedOutputToAFile(void);

int main()
{
    writingCharactersToATextFile();

    writingAStringToATextFile();

    writingFormattedOutputToAFile();
    
    
    return 0;
}

/* Writing characters to a text file */
void writingCharactersToATextFile(void)
{
    FILE *fp;
    int ch;
    char str[50];

    fp = fopen("file.txt", "w+");
    if (!fp)
        exit(-1);

    for (ch = 33; ch <= 100; ch++) {
        fputc(ch, fp);
    }
    
    rewind(fp);

    while(fgets(str, 50, fp)) {
        printf("%s", str);
    }

    fclose(fp);
    fp = NULL;
}

/* Writing a string to text file */
void writingAStringToATextFile(void)
{
    FILE *filePointer;

    filePointer = fopen("file.txt", "w+");
    if (!filePointer) {
        perror("File opening error");
        exit(-1);
    }
    fputs("This is C Course", filePointer); // This function will write characters from a string until it reaces a '\0' character. does not write the null terminator character to the fiel
    fputs("I am happy to be here", filePointer);

    fclose(filePointer);
    filePointer = NULL;
}

void writingFormattedOutputToAFile(void)
{
    FILE *fp;

    fp = fopen("file.txt", "w+");
    if (!fp) {
        perror("File opening error");
        exit(-1);
    }

    fprintf(fp, "%s %s %s %s %d", "Hello", "my", "number", "is", 555);

    fclose(fp);
}