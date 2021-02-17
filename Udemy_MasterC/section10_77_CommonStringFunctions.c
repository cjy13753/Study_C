#include <stdio.h>
#include <string.h>

int main(){

    // Must use strncpy instead of strcpy in order to avoid buffer overflow
    char myString[] = "My Name is Jason";

    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);

    printf("The string is: %s\n", temp);

    // strcat
    char myString2[] = "my string";
    char input[80];
    
    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    printf("\nThe string %s concatenated with %s is::::\n", myString2, input);
    printf("%s\n", strcat(myString2, input));

    // strncat
    char src[50], dest[50];

    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15);

    printf("Final destination string: |%s|\n", dest);

    // strcmp
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));

    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));

    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a"));

    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));

    printf("strcmp(\"zapple\", \"apple\") is ");
    printf("%d\n", strcmp("zapple", "apple"));

    printf("strcmp(\"zapple\", \"apples\") is ");
    printf("%d\n", strcmp("zapple", "apples"));

    // strncmp
    if (strncmp("astronomy", "astro", 5) == 0)
    {
        printf("Found: astronomy\n");
    }

    if (strncmp("astounding", "astro", 5) == 0)
    {
        printf("Found: astounding\n");
    }






    return 0;
}