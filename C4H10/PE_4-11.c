#include <stdio.h>
int main()
{
    int m, n;
    printf("\nEnter two numbers m and n resp: ");
    scanf("%d%d", &m, &n);
    if (n % m == 0)
    {
        printf("\n%d is a multiple of %d", m, n);
    }
    else
    {
        printf("\n%d is not a multiple of %d", m, n);
    }
}