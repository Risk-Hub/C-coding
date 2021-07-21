#include <stdio.h>
int matrix(int [][100], int, int);
int main()
{
    int a[100][100], m, n;
    printf("\nEnter the order of the matrix (MxN): ");
    scanf("%d%d", &m, &n);
    printf("\nThe largest element is: %d", matrix(a, m, n));
}
int matrix(int a[][100], int m, int n)
{
    int i, j, temp;
    printf("\nEnter the elements of matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    temp = a[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (temp < a[i][j])
            {
                temp = a[i][j];
            }
        }
    }
    return temp;
}