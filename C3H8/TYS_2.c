#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter two float type numerals: ");
    scanf("%f %f", &a, &b);
    printf("The numbers are: %.4f %.4f\n", a, b);
    printf("The division of first number with the second number is: %.4f", a / b);
}