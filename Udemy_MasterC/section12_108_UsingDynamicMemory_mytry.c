#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    
    int limit;
    char *usertext = NULL;
    
    printf("%s", "What's the limit of string you are entering?: ");
    scanf("%d", &limit);
    usertext = (char *) malloc(limit * sizeof(char));
    
    printf("%s", "What do you want to enter?: ");
    scanf("%s", usertext); // Failed to include a check that confirms if malloc was properly executed or not

    printf("%s\n", usertext);
    
    
    return 0;
}