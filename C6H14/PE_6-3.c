#include <stdio.h>
int main()
{
    int a, b, c, d, m, n;
    printf("\nEnter the values of a,b,m resp: ");
    scanf("%d%d%d", &a, &b, &m);
    printf("\nEnter the values of c,d,n: ");
    scanf("%d%d%d", &c, &d, &n);
    if (((a * d) - (c * b)) != 0)
    {
        printf("\nx1 = %f", (float)((m * d) - (b * n)) / ((a * d) - (c * b)));
        printf("\nx2 = %f", (float)((n * a) - (m * c)) / ((a * d) - (c * b)));
    }
    else
    {
        printf("\nThe roots tends to infinity");
    }
}