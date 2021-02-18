#include <stdio.h>

int countNumberOfCharacters(const char test[]);
void concatenateTwoStrings(char result[], const char str1[], const char str2[]);
int compareTwoStrings(const char str1[], const char str2[]);

int main()
{
    char result[100];
    const char str1[] = "Hello";
    const char str2[] = "World";
    
    printf("%d\n", countNumberOfCharacters(str1));

    concatenateTwoStrings(result, str1, str2);

    printf("%d\n", compareTwoStrings(str1, str2));

    
    return 0;
}

int countNumberOfCharacters(const char str1[])
{
    int numberOfCharacters = 0;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        numberOfCharacters++;
    }
    
    return numberOfCharacters;
}

void concatenateTwoStrings(char result[], const char str1[], const char str2[])
{
    for (int i = 0; str1[i] != '\0'; i++)
    {
        result[i] = str1[i];
    }

    for (int i = countNumberOfCharacters(result), j = 0; str2[j] != '\0'; i++, j++)
    {
        result[i] = str2[j];
    }
    printf("%s\n", result);

    return;
}

int compareTwoStrings(const char str1[], const char str2[])
{
    int trueOrFalse = 0;
    
    if (countNumberOfCharacters(str1) != countNumberOfCharacters(str2))
        trueOrFalse++;
    
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
            trueOrFalse++;
    }

    if (trueOrFalse == 0)
        return 1;
    else
        return 0;
}