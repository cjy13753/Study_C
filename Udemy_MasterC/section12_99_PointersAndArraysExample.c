#include <stdio.h>
#include <string.h>

int main(void)
{
    /* example with string array */
    char multiple_string[] = "a string";
    char *p_string = multiple_string;

    for(int i = 0; i < strlen(multiple_string); ++i)
        printf("multiple_string[%d] = %c, *(p_string+%d) = %c, &multiple_string[%d] = %p_string, p_string+%d = %p_string\n", i, multiple_string[i], i, *(p_string+i), i, &multiple_string[i], i, p_string+i);

    /* example with long array */
    long multiple_long[] = {15L, 25L, 35L, 45L};
    long *p_long = multiple_long;

    for(int i = 0; i < sizeof(multiple_long) / sizeof(multiple_long[0]); ++i)
        printf("address p_long+%d (&multiple_long[%d]): %llu, *(p_long+%d) value: %d\n", i, i, (unsigned long long)(p_long+i), i, *(p_long+i));

    printf("\n Type long occupies: %d bytes\n", (int)sizeof(long));
    

    return 0;
}