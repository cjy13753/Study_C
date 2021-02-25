#include <stdio.h>

#define FILENAME "file.txt"

int main()
{
    FILE *fp = NULL;

    int cnt = 0;
    int i = 0;

    fp = fopen(FILENAME, "r");

    if (!fp) {
        return -1;
    }

    fseek(fp, 0, SEEK_END);

    cnt = ftell(fp);

    while (i < cnt) {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    fclose(fp);
    fp = NULL;
    
    
    
    return 0;
}