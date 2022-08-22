#include <stdio.h>
#include <limits.h>

int main(void)
{
    int sum = 0, num, digit, sdigit;

    for (int i = 2; i < INT_MAX; i++)
    {
        num = i;
        while (num != 0) 
        {
            digit = num % 10;
            sdigit += (digit * digit * digit * digit * digit);
            num /= 10;
        }

        if (sdigit == i)
        {
            printf("\nNumber is (sdigit, i): %d, %d\n", sdigit, i);  
            sum += sdigit;
        } 
        sdigit = 0;
    }

    printf("Sum is: %d", sum);

    return 0;
}
