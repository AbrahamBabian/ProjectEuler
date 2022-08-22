#include <stdio.h> 
#define N 10001

int main (void)
{
    long number = 3, j, rt;
    int count = 1, flag = 1;

    while (count < N)
    {
        
        for (int i = 2; i*i <= number; i++)
        {
            if (number % i == 0)
            {
                flag = 0;
            }
            
        }
        if (flag == 1)
        {
            count++;    
        }
        
        flag = 1;
        
        if(count < N) number += 2;
    }

    printf("\nThe prime is: %d, The Index is: %d\n ", number, count);

}