#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char ch;
    long position;

    fp = fopen("file.txt", "r");
    if (!fp)
        return -1;

    fseek(fp, 0, SEEK_END);

    position = ftell(fp);

    printf("%d\n", position);


    for (int i = 1; i <= position; i++) {
        fseek(fp, -i, SEEK_END);
        ch = fgetc(fp);
        printf("%c", ch);
    }
    
    fclose(fp);
    fp = NULL;
    
    
    
    return 0;
}