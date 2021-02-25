#include <stdio.h>

int useFTELL();
int useFGETPOS(void);
int useFSEEK(void);
int useFGETPOSandFSETPOS(void);

int main()
{

    useFTELL();
    
    useFGETPOS();

    useFSEEK();

    useFGETPOSandFSETPOS();

    return 0;
}

int useFTELL() {
    FILE *fp = NULL;
    int len;

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Eroor opening file");
        return(-1);
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);

    printf("Total size of file.txt = %d bytes\n", len);

    return 0;

}

int useFGETPOS(void) {
    FILE *fp = NULL;
    fpos_t position;

    fp = fopen("file.txt", "w+");
    if (!fp) {
        perror("file opening erorr");
        return -1;
    }

    fgetpos(fp, &position);
    fputs("Hello, World!", fp);
    fclose(fp);

    return 0;
}

int useFSEEK(void) {
    FILE *fp = NULL;

    fp = fopen("file.txt", "w+");
    if (!fp) {
        perror("file opening error");
        return -1;
    }

    fputs("This is Jun", fp);

    fseek(fp, 7, SEEK_SET); // This allows you to go to any position just by specifying the appropriate offset
    fputs("Hello how are you", fp);
    fclose(fp);
    fp = NULL;
}

int useFGETPOSandFSETPOS(void) {
    FILE *fp = NULL;
    fpos_t position;

    fp = fopen("file.txt", "w+");
    if (!fp) {
        perror("file opening error");
        return -1;
    }

    fgetpos(fp, &position);
    fputs("Hello, World!", fp);

    fsetpos(fp, &position); // You can only use it to get to a place in a file that you have been before
    fputs("This is going to override previous content", fp);
    fclose(fp);

    return 0;
}