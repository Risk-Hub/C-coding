#include <stdio.h>
int main()
{
    int i, j, n, a[100];
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = n - 1; i > 0; i--)
    {
        int max = i;
        for (j = 0; j < n; j++)
        {
            if (a[max] > a[j])
            {
                max = j;
            }
        }
        if (max != i)
        {
            int temp = a[max];
            a[j] = a[max];
            a[max] = temp;
        }
    }
    for (int max = 0; max < n; max++)
    {
        printf("%d ", a[max]);
    }
}