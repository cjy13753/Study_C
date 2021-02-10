#include <stdio.h>

int main()
{
    int primes[100] = {0};

    primes[0] = 2;
    primes[1] = 3;

    int number_of_primes = 2;

    for (int candidate = 5; candidate < 100; candidate = candidate + 2)
    {
        for (int i = 0; i < number_of_primes; i++)
        {
            if (candidate % primes[i] == 0)
            {
                break;
            }
            else
            {
                if (i == number_of_primes - 1)
                {
                    primes[number_of_primes] = candidate;
                    number_of_primes += 1;
                }
            }
        }
    }

    for (int iterator = 0; iterator < number_of_primes; iterator++)
    {
        printf("%i ", primes[iterator]);
    }
    
    
    return 0;
}