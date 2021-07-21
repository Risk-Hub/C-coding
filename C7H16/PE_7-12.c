#include <stdio.h>
#include <math.h>
int main()
{
    float P, c, d, n = 1.0, temp;
    printf("\nEnter the original cost: ");
    scanf("%f", &c);
    printf("\nEnter the depriciation rate: ");
    scanf("%f", &d);
    printf("\nEnter the scrap value: ");
    scanf("%f", &P);
    while (temp >= P)
    {
        temp = c * pow((1.0 - d), n);
        n += 1.0;
    }
    printf("\nUseful life (in years): %f", n);
}