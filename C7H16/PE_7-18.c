#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < 5; j++)
            {
                if (j == 2)
                {
                    printf("%d", i + 1);
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        if (i == 1)
        {
            for (int j = 0; j < 5; j++)
            {
                if (j >= 1 && j <= 2)
                {
                    printf(" %c", 64 + j);
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        if (i == 2)
        {
            for (int j = 0; j < 5; j++)
            {
                if (j >= 1 && j <= 3)
                {
                    printf("%d ", j + 1);
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        if (i == 3)
        {
            for (int j = 0; j < 4; j++)
            {
                printf(" %c", 67 + j);
            }
            printf("\n");
        }
        if (i == 4)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%d ", j + 5);
            }
        }
    }
}