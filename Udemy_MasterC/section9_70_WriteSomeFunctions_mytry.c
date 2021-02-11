#include <stdio.h>

int findGCD(int x, int y);
float absoluteValue(float x);
float calSquareRoot(float number);


int main(void)
{
        
    printf("\nTest for findGCD\n");
    int test1 = findGCD(15, 100);
    printf("Test result: %d\n", test1);
    int test2 = findGCD(-15, 100);
    printf("Test result: %d\n", test2);

    printf("\nTest for absoluteValue\n");   
    float test3 = absoluteValue(50.3f);
    printf("Test result: %f\n", test3);
    float test4 = absoluteValue(-50.3f);
    printf("Test result: %f\n", test4);
    float test5 = absoluteValue(50);
    printf("Test result: %f\n", test5);
    float test6 = absoluteValue(-50);
    printf("Test result: %f\n", test6);

    printf("\nTest for calSquareRoot\n");   
    float test7 = calSquareRoot(100);
    printf("Test result: %f\n", test7);
    float test8 = calSquareRoot(3);
    printf("Test result: %f\n", test8);
    float test9 = calSquareRoot(-15);
    printf("Test result: %f\n", test9);
    
    return 0;
}

int findGCD(int x, int y)
{
    if ((x<0) | (y<0))
    {
        printf("Only non-negative integers are allowed\n");
        return -1;
    }

    if (x == 0)
        return y;

    if (y == 0)
        return x;

    if (x == y)
        return x;

    if (x > y)
        return findGCD(x-y, y);
    return findGCD(x, y-x);
}

float absoluteValue(float x)
{
    if (x >= 0)
        return x;
    return -x;
}

float calSquareRoot(float number)
{
    if (number < 0)
    {
        printf("Cannot calculate the square root of a negative number\n");
        return -1.0f;
    }
    
    float temp, sqrt;

    sqrt = number / 2;
    temp = 0;

    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (number/temp + temp) / 2;
    }

    return sqrt;

}