#include <stdio.h>
#include <stdlib.h>

int readStringFromATextFile(void);
int readFormattedInput();

int main()
{
    /* Reading characters from a text file */
    FILE * pfile = NULL;
    int c;

    pfile = fopen("section5_31_EnumsAndChars.c", "r");

    if(!pfile)
    {
        perror("Erorr in opening file");
        return(-1);
    }


    while ((c = fgetc(pfile)) != EOF)
        printf("%c", c);

    printf("\n\n\n");

    fclose(pfile);
    pfile = NULL;

    /* Reading strings from a text file */
    readStringFromATextFile();

    /* Reading formatted input from a file */
    readFormattedInput();

    return 0;
}

/* Reading strings from a text file */
int readStringFromATextFile(void)
{
    FILE *fp = NULL;
    char str[60];

    fp = fopen("section5_31_EnumsAndChars.c", "r");
    
    if(fp == NULL) {
        perror("Error opening file");
        return(-1);
    }

    while (fgets(str, 60, fp))
    {
        printf("%s", str);
    }

    printf("\n");

    fclose(fp);
    fp = NULL;

    return 0;
}



/* Reading formatted input from a file */
int readFormattedInput()
{
    char str1[10], str2[10], str3[10];
    float year;
    FILE * fp;

    fp = fopen("file.txt", "w+");
    if (fp)
    {
        fputs("Hello how are 2012.89", fp);
    }
    else
    {
        perror("file opening error");
        return(-1);
    }

    rewind(fp);

    fscanf(fp, "%s %s %s %f", str1, str2, str3, &year);

    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read Integer |%.1f|\n", year);

    fclose(fp);

    return 0;
}