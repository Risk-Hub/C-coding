#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (!(i % 2))
            {
                if (j % 2)
                {
                    printf("%d ", (j - 1) % 2);
                }
                else if (!(j % 2))
                {
                    printf("%d ", (j + 1) % 2);
                }
            }
            else
            {
                if (j % 2)
                {
                    printf("%d ", j % 2);
                }
                else if (!(j % 2))
                {
                    printf("%d ", j % 2);
                }
            }
        }
        printf("\n");
    }
}