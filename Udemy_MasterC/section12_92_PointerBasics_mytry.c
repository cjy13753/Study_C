#include <stdio.h>

int main()
{
    int number = 0;
    int *pnumber = NULL;

    pnumber = &number;

    printf("The address of the int variabl: %p\n", &number);
    printf("The address of the pointer: %p\n", (void*)&pnumber);
    printf("The value of the pointer: %p\n", pnumber);
    printf("The value of what the pointer is pointing to: %d\n", (int)*pnumber);
    
    return 0;
}