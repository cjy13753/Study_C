#include <sys/time.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    struct timeval start;
    struct timeval end;
    char *temp[50];
    gettimeofday(&start, NULL);

    read(5, temp, 50);

    gettimeofday(&end, NULL);
    
    printf("start - sec elapsed: %ld, msec elapsed: %ld\n", start.tv_sec, start.tv_usec);
    printf("end - sec elapsed: %ld, msec elapsed: %ld\n", end.tv_sec, end.tv_usec);
    printf("end - start: %ld\n", end.tv_usec - start.tv_usec);
}