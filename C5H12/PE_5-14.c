#include <stdio.h>
int main()
{
    int i, j;
    for (j = 5; j > 0; j--)
    {
        for (int x = j; x <= 4; x++)
        {
            printf(" ");
        }
        for (i = j; i > 0; i--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}