#include <stdio.h>

int main()
{
    char c = 'A';
    char d = '*'; // d = 'A'

    printf("%c %hhd\n", c, c);
    printf("%c %hhd\n", d, d);

    printf("%c \n", c + 1);

    char a = '\a';
    printf("%c", a);
    printf("\07");
    printf("\x7");

    printf("\x23\n");

    float salary;
    printf("$______\n");
    printf("$______\b\b\b\b\b\b");
    scanf("%f", &salary);

    printf("AB\tCDEF\n");
    printf("ABC\tDEF\n");

    printf("\\ \'HA+\' \"Hello\" \?\n");
    printf("\\ 'HA+' \"Hello\" \?\n");
    printf("\\ \'HA+\' \"Hello\" ?\n");
}