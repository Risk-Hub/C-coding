#include <stdio.h>
int main()
{
    int i, j, m, n, a[100][100];
    printf("\nEnter the order of matrix: ");
    scanf("%d%d", &m, &n);
    printf("\nEnter the elements of the matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe transpose of the given matrix is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}