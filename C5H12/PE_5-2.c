#include<stdio.h>
int main()
{
    float x,y;
    printf("\nEnter the values of x and y: ");
    scanf("%f%f",&x,&y);
    printf("\n(x+y)/(x-y): %f",(x+y)/(x-y));
    printf("\n(x+y)/2: %f",(x+y)/2.0);
    printf("\n(x+y)(x-y): %f",(x+y)*(x-y));
}