#include <stdio.h>
int main()
{
    int i, j, k = 0;
    for (i = 1; i <= 91; i++)
    {
        for (j = i; j <= i+1; j++)
        {
            printf("%d ", j);
        }
        i=j;
        printf("\n");
    }
}