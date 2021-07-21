#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int x, y;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &x, &y);
    printf("\nThe GCD of %d and %d is %d", x, y, gcd(x, y));
}
int gcd(int x, int y)
{
    if (y)
    {
        return gcd(y, x % y);
    }
    else
    {
        return x;
    }
}