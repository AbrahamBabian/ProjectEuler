#include <stdio.h>
#define UPTO 2*1000000

int main(int argc, char const *argv[])
{
     long long sum = 0;

    for (int i = 2; i < UPTO; i++)
    {
        if(checkPrime(i) == 1)
        {
            sum += i;
        } 
    }

    printf("Sum is: %lld\n", sum);

    return 0;
}

int checkPrime(int num)
{
    int flag = 1;
    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
        }
        
    }

    return flag;
    
}