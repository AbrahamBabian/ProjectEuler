#include <stdio.h>
#define LIMIT 1000000

int main(int argc, char const *argv[])
{
    long num, count, countMax = 0, numMax;

    for (int i = 1; i < LIMIT; i++)
    {
        num = i;
        while (num != 1)
        {
            if (num % 2 == 0) num /= 2;
            else num = num * 3 + 1;
            count++;  
        }
        if(count > countMax)
        {
            countMax = count;
            numMax = i;
        }
        count = 0;

    }

    printf("MAXnum is: %d, count of divides: %d\n", numMax, countMax);
    
    return 0;
}

