#include <stdio.h>

#define N 1000

int main(int argc, char const *argv[])
{
    long long sum = 0, power = 0;

    for (int i = 1; i <= N; i++)
    {
        power = i;

        for (int j = 1; j < i; j++)
        {
            power *= i;
            power %= 10000000000;
        }

        sum += power;
        sum %= 10000000000;
    }

    printf("sum is: %lld", sum);
    
    return 0;
}
