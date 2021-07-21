#include <stdio.h>
int ascending(int a[], int b[], int m, int n);
int main()
{
    int a[100], b[100], m, n, i;
    printf("\nEnter the nuber of elements of first matrix: ");
    scanf("%d", &m);
    printf("\nEnter the elements of first matrix: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the number of elements of second matrix: ");
    scanf("%d", &n);
    printf("\nEnter the elements of second matrix: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    ascending(a, b, m, n);
}
int merge(int a[], int b[], int m, int n);
int ascending(int a[], int b[], int m, int n)
{
    int i, j, temp1, temp2;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] < a[j])
            {
                temp1 = a[i];
                a[i] = a[j];
                a[j] = temp1;
            }
        }
    }
    printf("\nFirst matrix in ascending order is :");
    for (i = 0; i < m; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (b[i] < b[j])
            {
                temp2 = b[i];
                b[i] = b[j];
                b[j] = temp2;
            }
        }
    }
    printf("\nSecond matrix in ascending order is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    merge(a, b, m, n);
}
int sorted_list(int c[], int m, int n);
int merge(int a[], int b[], int m, int n)
{
    int c[100], i, j;
    for (i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (j = 0; j < n; j++)
    {
        c[i + 1] = b[j];
        i++;
    }
    printf("\nThe array after merging: ");
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", c[i]);
    }
    sorted_list(c, m, n);
}
int sorted_list(int c[], int m, int n)
{
    int temp, i, j;
    for (i = 0; i < m + n; i++)
    {
        for (j = 0; j < m + n; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("\nSorted list in ascending order is :");
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", c[i]);
    }
}