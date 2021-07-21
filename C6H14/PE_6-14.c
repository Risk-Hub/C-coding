#include <stdio.h>
int main()
{
    int n, c = 0, d = 0, e = 0;
    printf("\nEnter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("\n%d is a PRIME number", n);
    }
    else
    {
        printf("\n%d is not a PRIME number", n);
    }
    printf("\n\nProgram to count prime numbers between 100 and 200\n");
    for (int i = 100; i <= 200; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                d++;
            }
        }
        if (d == 2)
        {
            e++;
        }
        d = 0;
    }
    printf("No. of prime nos. in between 100 and 200 are: %d", e);
}