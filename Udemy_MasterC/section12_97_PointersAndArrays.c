#include <stdio.h>


int main()
{
    int values[100] = {1};

    int *valuesPtr;

    valuesPtr = values; // valuesPtr = &values[0] is the same

    printf("%d\n", values[0]);
    printf("%d\n", *(values+1));
    printf("%d\n", valuesPtr[0]);
    printf("%d\n", *(valuesPtr+1));

    printf("%d\n", *++valuesPtr);
    printf("%d\n", *valuesPtr++);
    // printf("%d\n", *(values++)); This causes an error "lvalue required as increment operand"
   
    
    return 0;
}