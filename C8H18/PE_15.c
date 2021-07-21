#include <stdio.h>
int main()
{
    int i, j, a[100][100], b[100][100], m, n;
    printf("\nEnter the order of matrix: ");
    scanf("%d%d", &m, &n);
    printf("\nEnter the elements of matrix A: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the elements of matrix B: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nResult of A+B:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%2d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    printf("\nResult of A-B:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%2d ", a[i][j] - b[i][j]);
        }
        printf("\n");
    }
}