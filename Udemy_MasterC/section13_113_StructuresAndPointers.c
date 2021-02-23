#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct namect
{
    char *fname;
    char *lname;
    int letters;
};

void getinfo(struct namect * pst);

int main()
{
    /* Pointers to structures */
    struct date
    {
        int month;
        int day;
        int year;
    };



    struct date todaysDate = {12, 5, 2019};
    
    struct date *datePtr;

    datePtr = &todaysDate;

    (*datePtr).day = 21; // Parentheses are required because the structure member operator . has higher precedence than the indirection operator *

    if ((*datePtr).month == 11)
    {
        return 1;
    }

    if (datePtr->month == 11) // pointer to strucrues are so foten used in C that a special operator exists like this
    {
        return 1;
    }

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Today's date is %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year % 100);


    /* Structures containing pointers */
    struct intPtrs
    {
        int *p1;
        int *p2;
    };
    
    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

    /* Structures related to character arrays and character pointers */
    struct names
    {
        char first[20];
        char last[20];
    };

    struct pnames
    {
        char *first;
        char *last;
    };
    
    struct names veep = {"Talia", "Summers"};
    struct pnames treas = {"Brad", "Fallingjaw"}; // Actually should not be used like this
    printf("%s and %s\n", veep.first, treas.first);

        /* 
            The struct names variable veep.
                strings are stored inside the structure
                structure has allocated a total of 40 bytes to hold the two names

            The struct pnames variable treas
                strings are stored wherever the compiler stores string constants
                the structure holds the two addresses, which takes a total of 16 bytes on our system
                the struct pnames structure allocates no space to store strings
                it can be used only with strings that have had space allocated for them elsewhere
            
            THe pointers in a pnames strucrue should be used only to manage strings that were created and allocated elsewhere in the program
        */

    /* Appropriate use of structures containing char pointers */
    struct namect example;
    struct namect * pst = &example;
    getinfo(pst);
    printf("%s %s\n", pst->fname, pst->lname);


    return 0;
}

void getinfo(struct namect * pst)
{
    char temp[20];
    printf("Please enter your first name.\n");
    gets(temp, 20);

    // allocate memory to hold name
    printf("%d\n", strlen(temp) + 1);
    pst->fname = (char *)malloc(strlen(temp) + 1);
    

    // copy name to allocated memory
    strcpy(pst->fname, temp);
    printf("Please enter your last name.\n");
    gets(temp, 20);
    pst->lname = (char *) malloc(strlen(temp)+1);
    strcpy(pst->lname, temp);
}