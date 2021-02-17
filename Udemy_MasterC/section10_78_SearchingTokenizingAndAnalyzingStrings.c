#include <string.h>
#include <stdio.h>

int main()
{
    // strchr()
    char str[] = "The quick brown fox";
    char ch = 'q';
    char *pGot_char = NULL;
    pGot_char = strchr(str, ch);
    printf("%s\n", pGot_char);

    // strstr()
    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text, word);
    printf("%s\n", pFound);

    // strtok
    char str2[80] = "Hello how are you - my name is - jason";
    const char s[2] = "-";
    char *token;

    /* get the first token */
    token = strtok(str2, s);

    /* walk through other tokesn */
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    // analyzing string
    char buf[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("Enter an interesting string of less than %d characters:\n", 100);
    scanf("%s", buf);

    int i = 0;
    while(buf[i])
    {
        if(isalpha(buf[i]))
            ++nLetters;
        else if(isdigit(buf[i]))
            ++nDigits;
        else if(ispunct(buf[i]))
            ++nPunct;
        ++i;
    }
    printf("\nYour string contained %d letters, %d digits and %d punctuation characters.\n", nLetters, nDigits, nPunct);


    return 0;
}