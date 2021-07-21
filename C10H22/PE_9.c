#include <stdio.h>
int sum(int a, int b);
int main(void)
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    sum(a, b);
}
int difference(int a, int b);
int sum(int a, int b)
{
    printf("\nSum: %d", a + b);
    difference(a, b);
}
int product(int a, int b);
int difference(int a, int b)
{
    printf("\nDifference: %d", a - b);
    product(a, b);
}
int division(int a, int b);
int product(int a, int b)
{
    printf("\nProduct: %d", a * b);
    division(a, b);
}
int division(int a, int b)
{
    printf("\nDivision: %d", a / b);
}