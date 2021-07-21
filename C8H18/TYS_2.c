#include <stdio.h>
int main()
{
    int i, j, a[100][100], b[100][100];
    printf("\nEnter the elements of first matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the elements of second matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nThe sum of these two matrices is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}