#include <stdio.h>
int main()
{
    float n = 1.0, sum = 1.0, term = 1.0;
    while ((term / (n - 1)) - (term / n) >= 0.00001)
    {
        term = (term / n);
        sum += term;
        n++;
    }
    printf("\ne = %f", sum);
}