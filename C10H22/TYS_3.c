#include <stdio.h>
int sum(int a[]);
int main()
{
    int a[100];
    printf("\nThe sum of the elements is: %d", sum(a));
}
int sum(int a[])
{
    int n, i, sum = 0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}