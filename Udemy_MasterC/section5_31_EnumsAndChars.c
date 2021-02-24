#include <stdio.h>

enum testing
{
    January,
    February
};

int main()
{
    enum testing testing_variable = February;

    printf("%d", testing_variable);

    if (testing_variable == February)
        printf("January");
    else
        printf("Error");
}