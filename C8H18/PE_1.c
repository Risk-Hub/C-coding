#include <stdio.h>
int main()
{
    float x[100], y[100], tempa = 0, tempb = 0, tempc = 0, tempd = 0, m, c;
    int i,n;
    printf("\nEnter the number of coordinates you want to enter: ");
    scanf("%d", &n);
    printf("\nEnter the x-coordinates: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    printf("\nEnter the y-coordinates: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &y[i]);
    }
    for (i = 0; i < n; i++)
    {
        tempa += x[i] * y[i];
        tempb += x[i];
        tempc += y[i];
        tempd += x[i] * x[i];
    }
    m = (n * tempa - tempb * tempc) / (n * tempd - tempb * tempb);
    c = (tempc - m * tempb) / n;
    printf("\nm = %f, c = %f", m, c);
}