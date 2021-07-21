#include <stdio.h>
int main()
{
    float n;
    printf("\nEnter a number: ");
    scanf("%f", &n);
    if (n > 0)
    {
        float temp = n - (int)n;
        if (temp >= 0.5)
        {
            printf("\nThe nearest integer after round-off is: %d", (int)n + 1);
        }
        else
        {
            printf("\nThe nearest integer after round-off is: %d", (int)n);
        }
    }
    if (n < 0)
    {
        float temp = n - (int)n;
        if (temp <= -0.5)
        {
            printf("\nThe nearest integer after round-off is: %d", (int)n-1);
        }
        else if (temp > -0.5)
        {
            printf("\nThe nearest integer after round-off is: %d", (int)n + 1);
        }
    }
}