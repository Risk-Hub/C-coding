#include <stdio.h>
#include <math.h>
int main()
{
    for (double i = 0.0; i <= 9.9; i += 1.0)
    {
        for (double j = i; j <= (i + 0.92); j += 0.1)
        {
            printf("%f  ", sqrt(j));
        }
        printf("\n");
    }
}