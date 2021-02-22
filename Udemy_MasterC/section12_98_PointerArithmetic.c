#include <stdio.h>

int arraySum(int array[], const int n);

void main(void)
{
    int values[10] = {3, 7,-9, 3, 6, -1, 7, 9, 1, -5};
    printf("1. The address that the array 'values' points to: %p\n", values);
    printf("2. The address of values[0]: %p\n", &values[0]);
    printf("3. The address of the array 'values' itself: %p\n", (void*)&values);
    printf("***The value that the array 'values' references to: %d\n", *values);
    printf("***The value that the array '&values[0]' references to: %d\n", *&values[0]);

    printf("The sum is %i\n", arraySum(values, 10));
}

int arraySum(int array[], const int n)
{
    int sum = 0, *ptr;
    int * const arrayEnd = array + n;

    printf("4. The address that the argument 'array' points to: %p\n", array);
    printf("5. The address of &array[0]: %p\n", &array[0]);
    printf("6. The address of the argument 'array' itself: %p\n", (void*)&array);

    for (ptr = array; ptr < arrayEnd; ++ptr)
    {
        printf("The address that 'ptr' points to: %p\n", ptr);
        printf("The address of 'ptr' itself: %p\n", (void*)&ptr);
        sum += *ptr;
    }
        

    return sum;
}