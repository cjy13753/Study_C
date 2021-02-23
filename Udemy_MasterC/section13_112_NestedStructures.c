int main()
{
    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };

    struct date
    {
        int month;
        int day;
        int year;
    };

    struct dateAndTime
    {
        struct date sdate;
        struct time stime;
    };

    struct dateAndTime event = {{2, 1, 2015}, {3, 30, 0}};

    struct dateAndTime event2 = {{.month = 2, .day = 1, .year = 2015}, {.hour = 3, .minutes = 30, .seconds = 0}};

    struct dateAndTime events[100];

    events[0].stime.hours = 12;
    events[0].stime.minutes = 0;
    events[0].stime.seconds = 0;


    struct Time
    {
        struct Date
        {
            int day;
            int month;
            int year;
        } dob;

        int hour;
        int minutes;
        int seconds;
    }; // Declaring s tructure within a structure


 
    return 0;
}