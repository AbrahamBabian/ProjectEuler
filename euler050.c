#include <stdio.h>

#define LIMIT 1000000

int is_prime(int num)
{
    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int consecutive_primes = 0, prime, count_con = 0, count_prime = 0, count_max = 0, prime_max;
    for (int i = 2; i < LIMIT; i++)
    {

        for (int j = i; j < LIMIT; j++)
        {

            if (consecutive_primes + j> LIMIT)
                break;
            
            if (is_prime(j) == 1)
            {
                consecutive_primes += j;
                count_con++;
                if (is_prime(consecutive_primes) == 1)
                {
                    prime = consecutive_primes;
                    count_prime = count_con;
                }
            }
        }
        if (count_prime > count_max)
        {
            count_max = count_prime;
            prime_max = prime;
        }

        consecutive_primes = 0; count_con = 0;
    }

    printf("prime: %d, times: %d\n", prime_max, count_max);
    
    return 0;
}
