#include <stdio.h>
#define mc 100.0
int main()
{
    float unit, total;
    char str[100];
    printf("\nEnter the name of user: ");
    scanf("%[^\n]*c", str);
    printf("\nEnter the units consumed: ");
    scanf("%f", &unit);
    if (unit <= 200)
    {
        total = mc + 0.8 * unit;
    }
    if (unit > 200 && unit <= 300)
    {
        total = (200 * 0.8) + 0.9 * (unit - 200.0) + mc;
    }
    if (unit > 300 && unit <= 400)
    {
        total = (200 * 0.8) + (100 * 0.9) + 1.0 * (unit - 300.0) + mc;
    }
    if (unit > 400)
    {
        total = (200 * 0.8) + (100 * 0.9) + 1.0 * (unit - 300.0) + mc;
        total += (total * 0.15);
    }
    printf("\nUser Name: %s", str);
    printf("\nTotal Amount = Rs %.2f", total);
}