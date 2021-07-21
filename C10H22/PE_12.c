#include <stdio.h>
int matrix(int[][100], int[][100], int, int);
int main(void)
{
    int a[100][100], b[100][100], i, j, m, n;
    printf("\nEnter values of m and n resp: ");
    scanf("%d%d", &m, &n);
    printf("\nEnter the elements for first matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\nEnter the values for second matrix: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            scanf("%d", &b[i][j]);
    }
    matrix(a, b, m, n);
}
int matrix(int a[][100], int b[][100], int m, int n)
{
    int c[100][100], sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}