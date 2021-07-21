#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
    int i, j, k, n = 4, temp;
    temp = n;
    for (i = 0; i < 5; i++)
    {
        while (n > 0)
        {
            printf("  ");
            n--;
        }
        temp -= 1;
        n = temp;
        for (j = 0; j <= i; j++)
        {
            printf("%c ", str[i + j]);
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            if (i + j - k > i)
                printf("%c ", str[i + j - k - 1]);
        }
        printf("\n");
    }
}