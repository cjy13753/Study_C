#include <stdio.h>

int main()
{
    float rainfall_record[5][12] = {
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52},
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72},
        {71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82}
    };
    
    float sum = 0;
    int year = 2010;
    float total_year = 0;
    
    printf("YEAR\tRAINFALL\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            sum += rainfall_record[i][j];
        }
        printf("%d\t%.1f\n", year, sum);
        year++;
        total_year += sum;
        sum = 0;
    }

    float yearly_average = total_year / 5;
    printf("\nThe yearly average is %.1f inches\n", yearly_average);

    printf("\nMONTHLY AVERAGES:\n");
    printf("\nMONTH\tAVERAGE\n");

    int month = 1;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += rainfall_record[j][i];
        }
        printf("%d\t%.1f\n", month, sum / 5);
        sum = 0;
        month++;
    }

    return 0;
}