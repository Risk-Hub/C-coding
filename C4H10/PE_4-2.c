#include<stdio.h>
int main()
{
    float n;
    printf("\nEnter a floating-point number: ");
    scanf("%f",&n);
    int temp=(int)n%100;
    printf("\nTwo right-most digits of the integral part of %f is %d",n,temp);
}