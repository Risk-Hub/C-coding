#include <stdio.h>
int main()
{
    int a[1000], i, sum = 0, c = 0, d = 0;
    printf("\nEnter the two-digit numbers one by one: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for (int j = 0; j < 10; j++)
    {
        if (a[j] > 0)
        {
            c++;
        }
        else if (a[j] < 0)
        {
            d++;
        }
    }
    printf("\nNumber of positive numbers: %d", c);
    printf("\nNumber of negative numbers: %d", d);
    printf("\nSum = %d", sum);
}