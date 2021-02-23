int main ()
{
    /* Array fo structures */
    struct date
    {
        int month;
        int day;
        int year;
    };
    
    struct date myDates1[10];

    myDates1[1].month = 8;
    myDates1[1].day = 8;
    myDates1[1].year = 8;

    struct date myDates2[5] = {{12, 10, 1975}, {12, 30, 1980}, {11, 15, 2005}}; // Sets the frist three dates

    struct date myDates3[5] = {[2] = {12, 10, 1975}}; // Initializes just the third element of the array to the speicfied value

    struct date myDates4[5] = {[1].month = 12, [1].day = 30}; // Sets just the month and day of the second element of the array to 12 and 30


    /* Structures containing arrays */

    struct month
    {
        int numberOfDays;
        char name[3];
    };

    struct month aMonth;
    aMonth.numberOfDays = 31;
    aMonth.name[0] = 'J';
    aMonth.name[1] = 'a';
    aMonth.name[2] = 'n';

    struct month aMonth1 = {31, {'J', 'a', 'n'}}; // This is also possible

    struct month months[12]; // YOu can set up 12-month structures inside an array to represent each month of the year





    return 0;




}