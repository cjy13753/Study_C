#include <stdio.h>

int main()
{
    struct date
    {
        int month;
        int day;
        int year;
    }; // At this point, no memory is allocated to the structure

    struct date today;

    today.month = 9;
    today.day = 25;
    today.year = 2015;

    printf("Today's date is %i%i%.2i.\n", today.month, today.day, today.year % 100);

    today = (struct date) {10, 11, 2017};

    printf("Today's date is %i%i%.2i.\n", today.month, today.day, today.year % 100);


}