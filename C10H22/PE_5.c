#include <stdio.h>
int fibonacci(int n, int a, int b, int c);
int main(void)
{
    int a = 1, b = 1, n, c;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    fibonacci(n,a,b,c);
}
int fibonacci(int n, int a, int b, int c)
{
    printf("%d %d ", a, b);
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}