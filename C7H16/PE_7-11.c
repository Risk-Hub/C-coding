#include <stdio.h>
#include <math.h>
int main()
{
    float x, n = 1.0, term = 1.0, sin = 0.0;
    int i = 0, j = 1;
    printf("\nEnter the value of x: ");
    scanf("%f", &x);
    while (term >= 0.000001)
    {
        term *= (pow(-1, i) * term * pow(x, j) / n);
        sin += term;
        i++;
        j += 2;
        n += 2;
    }
    printf("\nsin(x) = %f", sin);
}