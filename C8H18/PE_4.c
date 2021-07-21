#include <stdio.h>
int main()
{
    int i, j, n, a[500][500];
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);
    a[0][0] = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                a[i][j] = 1;
                printf("%d ", a[i][j]);
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
}