#include <stdio.h>
int main()
{
    int i, j, m, n, x, y, sum, a[100][100], b[100][100], c[100][100];
    printf("\nEnter the order of matrix A: ");
    scanf("%d%d", &m, &n);
    printf("\nEnter the order of matrix B: ");
    scanf("%d%d", &x, &y);
    if (n != x)
    {
        printf("\nMultiplication of A with B is not possible");
    }
    else
    {
        printf("\nEnter the elements of A: ");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nEnter the elements of B: ");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("\nMatrix A is: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("\nMatrix B is: \n");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < m; i++)
        {
            sum = 0;
            for (j = 0; j < n; j++)
            {
                sum += a[i][j] * b[j][i];
            }
            c[i][j] = sum;
        }
        printf("\nThe required matrix C is:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < y; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
}