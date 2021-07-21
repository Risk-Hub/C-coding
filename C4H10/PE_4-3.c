#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0, temp;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    temp = n;
    while (n >= 10)
    {
        n /= 10;
        count++;
    }
    n = temp;
    printf("%d\n", n);
    for (int i = count; i > 0; i--)
    {
        n = n % (int)(pow(10, i));
        printf("%d\n", n);
    }
}