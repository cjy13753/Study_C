#include <stdio.h>

int main(void)
{
    // How a indirection operator(*) works
    int count = 10, x;
    int *int_pointer = &count;

    x = *int_pointer;

    printf("count=%i, x=%i\n", count, x);

    // Show address of a variable and a pointer & number of bytes that a pointer occupies
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    pnumber = &number;
    printf("number's value: %d\n", number);
    printf("number's address: %p\n", &number);
    printf("number's size %d bytes\n", (int)sizeof(number));
    printf("pnumber's value: %p\n", pnumber);
    printf("pnumber's address: %p\n", (void*)&pnumber);
    printf("pnumber's size: %d bytes\n", (int)sizeof(pnumber));
    
    return 0;
}