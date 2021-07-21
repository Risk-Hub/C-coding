#include <stdio.h>
int main()
{
    int i, n, a[100], b[100], c[100];
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements of array A: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the elements of array B: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\nAfter the required operation, array C is: ");
    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d ", c[i]);
    }
}