#include <stdio.h>
int main()
{
    float n;
    printf("\nEnter a floating-point number: ");
    scanf("%f", &n);
    int temp = (int)n % 10;
    printf("The right most digit of integral part of %f is %d", n, temp);
}