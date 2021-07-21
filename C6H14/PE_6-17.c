#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter two numbers a and b resp: ");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("\n%d is greater than %d", a, b);
    if (b > a)
        printf("\n%d is greater than %d", b, a);
    if (a == b)
        printf("\n%d and %d are equal", a, b);
}