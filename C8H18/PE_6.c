#include <stdio.h>
int main()
{
    int i, j, m, n, a[100], b[100], c[100];
    printf("\nEnter the number of elements in A: ");
    scanf("%d", &m);
    printf("\nEnter the number of elements in B: ");
    scanf("%d", &n);
    printf("\nEnter the elements of A: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the elements of B: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        c[i + m] = b[i];
    }
    for (i = 0; i < m + n; i++)
    {
        for (j = i + 1; j < m + n; j++)
        {
            if (c[i] > c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("\nThe elements of C in ascending order are: ");
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", c[i]);
    }
}