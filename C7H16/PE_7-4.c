#include <stdio.h>
int main()
{
    int P, n;
    float r, temp = 1.0;
    printf("\nEnter the principal amount: ");
    scanf("%d", &P);
    printf("\nEnter the rate of interest: ");
    scanf("%f", &r);
    printf("\nEnter the no. of years: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        temp *= (1 + r);
    }
    printf("\nValue of the money at the end of %d years is Rs %.2f", n, P * temp);
}