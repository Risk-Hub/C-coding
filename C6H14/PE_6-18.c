#include <stdio.h>
int main()
{
    float n;
    printf("\nEnter the percentage: ");
    scanf("%f", &n);
    if (n >= 80)
        printf("\nFirst Division");
    else if (n >= 60 && n < 80)
        printf("\nSecond Division");
    else if (n < 60)
        printf("\nThird Division");
}