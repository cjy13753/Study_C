#include <stdio.h>

int countStringSize(const char *givenString);

int main()
{
    char givenString[] = "Testing";

    countStringSize(givenString);   
    
    
    return 0;
}

int countStringSize(const char *givenString)
{
    const char *index = givenString;
    int stringSize;

    while (*index)
    {
        index++;
    }

    stringSize = index - givenString;
    printf("%d\n", stringSize);

}