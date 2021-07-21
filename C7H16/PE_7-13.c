#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("S ");
        }
        printf("\n");
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == 0 && j >= 0) || (i == 4 && j <= 4) || (i >= 1 && j <= 0) || (i <= 4 && j >= 4))
            {
                printf("S ");
            }
            if ((i >= 1 && j > 0) && (i <= 3 && j < 4))
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}