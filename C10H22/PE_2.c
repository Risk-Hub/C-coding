#include <stdio.h>
int x;
int space(int x);
int main()
{
    printf("\nEnter the value of x: ");
    scanf("%d", &x);
    space(x);
}
int space(int x)
{
    int a, b, i;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\n%d", a);
    for (i = 0; i < x; i++)
    {
        printf(" ");
    }
    printf("%d", b);
}