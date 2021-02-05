#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 1. sizeof basic types */
    
    int a = 0;
    unsigned int int_size1 = sizeof a;
    unsigned int int_size2 = sizeof(int);
    unsigned int int_size3 = sizeof(a);

    size_t int_size4 = sizeof(a);
    size_t float_size = sizeof(float);
}