#include <stdio.h>

int main()
{
    // simple arithmatic using pointer
    printf("\nSimple arithmatic using pointer\n");
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1;
    *pnum = 2L;
    ++num2;
    num2 += *pnum;

    pnum = &num2;
    ++*pnum;

    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2);


    // When receiving input
    printf("\nwhen receiving input\n");
    int value = 0;
    int *pvalue = &value;

    printf("input an integer: ");
    scanf("%d", pvalue);

    printf("You entered %d.\n", value);

    // Testing for NULL
    char *pchar = NULL;
    if (!pchar)
    {
        printf("pchar is a pointer pointing to NULL\n");
        
    }
    else
    {
        printf("pchar is a pointer pointing to something\n");
    }
    
    return 0;

}