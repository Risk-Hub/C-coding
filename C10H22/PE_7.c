#include <stdio.h>
int prime(int);
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    prime(n);
    printf("%d", prime(n));
}
int prime(int n)
{
    int q, c = 0, i;
    for (i = 1; i <= n; i++)
    {
        q = n % i;
        if (!q)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}