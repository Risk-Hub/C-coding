#include <stdio.h>
#include <math.h>
float round_off(float n);
void main(void)
{
    float n;
    printf("\nEnter a floating-point number n: ");
    scanf("%f", &n);
    round_off(n);
}
float round_off(float n)
{
    float dp;
    printf("\nEnter the decimal places you want to round-off: ");
    scanf("%f", &dp);
    n /= pow(0.1, dp);
    if ((float)n < 0.5)
    {
        n = (int)n;
    }
    if ((float)n >= 0.5)
    {
        n = (int)n + 1;
    }
    printf("\nAfter round-off: %f", n / pow(10, dp));
}