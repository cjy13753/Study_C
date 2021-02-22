#include <stdio.h>

int main()
{
    /* Defining a pointer to a constant */
    long value = 9999L;
    const long *pvalue = &value;

    // *pvalue = 8888; This causes an error "expression must be a modifiable lvalue"

    value = 7777L; // changing the value directly is possible

    long number = 8888L;
    pvalue = &number; // changing the address to which pointer points is also possible



    /* Defining a constant pointer */
    int count = 43;
    int *const pcount = &count;

    int item = 34;
    // pcount = &item; This causes an error "expression must be a modifiable lvalue"

    *pcount = 345; // changing the value that the pointer points to is possible


    return 0;
    
}
