#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
        for (int k = 1; k <= i; k++)
        {
            printf("  ");
        }
    }
}