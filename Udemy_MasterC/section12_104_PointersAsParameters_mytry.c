#include <stdio.h>

int square(int *value);

int main()
{
    int value = 5;
    
    printf("%d\n", square(&value));
    
    
    
    return 0;
}

int square(int *value)
{
    *value = *value * *value; 


    return *value;
}