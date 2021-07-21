#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int T, i, j;
    char S1[10000], S2[10000];
    scanf("%d", &T);
    scanf("%s", S1);
    scanf("%s", S2);
    for (j = 0; j < T; j++)
    {
        for (i = 0; i < 10000; i++)
        {
            if (i % 2)
            {
                printf("%c", S1[i]);
            }
        }
        printf(" ");
        for (i = 0; i < 10000; i++)
        {
            if (!(i % 2))
            {
                printf("%c", S2[i]);
            }
        }
        printf("\n");
    }
}