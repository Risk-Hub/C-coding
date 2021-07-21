#include <stdio.h>
#include <math.h>
long int fact(int j);
float numerator(float x, int n);
float compute(float x, int n, int s);
void main()
{
    int n, s;
    float x;
    printf("\nEnter the value of x: ");
    scanf("%f", &x);
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        s = -1;
    }
    else
    {
        s = 1;
    }
    printf("\nSum of terms: %f", compute(x, 2 * n - 1, s));
}
long int fact(int j)
{
    if (!j)
    {
        return 1;
    }
    else
    {
        return (j * fact(j - 1));
    }
}
float numerator(float x, int n)
{
    if (n == 1)
    {
        return x;
    }
    else
    {
        return (x * numerator(x, n - 1));
    }
}
float compute(float x, int n, int s)
{
    if (n == 1)
    {
        return x;
    }
    else
    {
        return (s * numerator(x, n) / fact(n) + compute(x, n - 2, -1 * s));
    }
}