#include <stdio.h>
int main()
{
    float n;
    printf("\nEnter a real number: ");
    scanf("%f", &n);
    printf("\n%d\t%f\t%d\n",(int)n+1,n,(int)n-1);
}