#include <stdio.h>
int main()
{
    int i, c = 0, sum = 0, a[100], n;
    printf("\nEnter the number of elements of array: ");
    scanf("%d", &n);
    printf("\nEnter the elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2)
        {
            sum += a[i];
            c++;
        }
    }
    printf("\nThere are %d odd numbers in the array and their sum is %d", c, sum);
}