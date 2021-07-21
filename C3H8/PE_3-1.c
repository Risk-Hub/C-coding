#include <stdio.h>
int main()
{
    int i, n;
    float sum = 0;
    printf("Program to print harmonic series\n");
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += (1 / (float)i);
    }
    printf("\nThe required sum is: %f", sum);
}