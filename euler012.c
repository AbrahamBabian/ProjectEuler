#include <stdio.h>
#include <math.h>
#define DIVISORS 500

int main(int argc, char const *argv[])
{
    long long number = 0;
    int i = 1;

    while(1)
    {
        if (countDivisors(number) > DIVISORS) break;
        number += i;
        i++;
    }

    printf("num is: %lld\n", number);
    
    return 0;
}

int countDivisors(long long num)
{
    int count = 0;
    long long i, lastI;

    for (i = 1; i * i < num; i++)
    {
        if (num % i == 0)
        {
            count += 2;
        }
        lastI = i;
    }
    if (lastI * lastI == num) count--; //well sqrt() func didnt work even when specifying -lm

    return count;
}
