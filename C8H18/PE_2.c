#include <stdio.h>
int main()
{
    int i, j, p, q, r, s;
    float temp[500][500], var1, var2;
    for (i = 0; i < 3; i++)
    {
        printf("\nFor Day%d:-\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("Enter the temperature for city%d: ", j + 1);
            scanf("%f", &temp[i][j]);
        }
    }
    printf("\n |");
    for (i = 0; i < 3; i++)
    {
        printf("%5d", i + 1);
    }
    printf("\n---------------------------------");
    for (i = 0; i < 3; i++)
    {
        printf("\n%d|  ", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("%.2f  ", temp[i][j]);
        }
    }
    var1 = temp[0][0];
    var2 = temp[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (var1 < temp[i][j])
            {
                var1 = temp[i][j];
                p = i + 1;
                q = j + 1;
            }
            if (var2 > temp[i][j])
            {
                var2 = temp[i][j];
                r = i + 1;
                s = j + 1;
            }
        }
    }
    printf("\nThe city and day corresponding to highest temperature is: %d and %d resp", q, p);
    printf("\nThe city and day corresponding to lowest temperature is: %d and %d resp", s, r);
}