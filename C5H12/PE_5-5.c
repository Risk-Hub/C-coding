#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("\nEnter two-digit numbers a and b: ");
    scanf("%d%d", &a, &b);
    printf("\n           \t  %d", a);
    printf("\n \tx    \t  %d", b);
    temp = b % 10;
    printf("\n%d x %d is\t %d", temp, a, a * temp);
    printf("\n%d x %d is\t %d", b / 10, a, a * (b / 10));
    printf("\nAdd them\t%d \n", a * b);
}