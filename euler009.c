#include <stdio.h>

#define N 1000

int main(int argc, char const *argv[])
{
    int a, b, c;

    for (a = 1; a < N; a++)
    {
        for (b = 1; b < N; b++)
        {
            for (c = 1; c < N; c++)
            {
                if ((a + b + c) == 1000 && (a*a + b*b) == c*c) break;
            } 

            if ((a + b + c) == 1000 && (a*a + b*b) == c*c) break;
        }

        if ((a + b + c) == 1000 && (a*a + b*b) == c*c) break;
    } 

    printf("\n%d, %d, %d, abc is: %d\n", a, b, c, a*b*c);

    return 0;
}