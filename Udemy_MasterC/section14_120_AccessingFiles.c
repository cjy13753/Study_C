#include <stdio.h>

int main()
{
    /* file open with write mode and close the file */    
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "w+");
    if (pfile == NULL)
    {
        printf("Failed to open %s.\n", filename);
        return(-1);
    }
    else
    {
        printf("Opening with write mode successful.\n");
    }

    fclose(pfile);
    pfile = NULL;

    /* file renaming */

    if(rename("myfile.txt", "new_myfile.txt"))
    {
        printf("Renaming failed.\n");
        return -1;
    }
    else
    {
        printf("Renaming successful.\n");
    }

    /* file deleting */
    if(remove("new_myfile.txt"))
    {
        printf("Removing file failed.\n");
        return -1;
    }
    else
    {
        printf("Removing file successful.\n");
    }
        

    return 0;
}