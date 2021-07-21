#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("\nEnter the values of a,b,c resp: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0 && b == 0)
    {
        printf("\nNo solution");
    }
    if (a == 0 && b != 0)
    {
        printf("\nThere is only one root which is x = %f", -c / b);
    }
    if (a != 0 && (b * b) - (4.0 * a * c) < 0)
    {
        printf("\nThere is no real root");
    }
    if (a != 0 && b != 0)
    {
        if ((b * b) - (4.0 * a * c) == 0)
        {
            printf("\nBoth the roots are real and equal which are x = %f", -b / (2.0 * a));
        }
    }
    if (a != 0 && (b * b) - (4.0 * a * c) > 0)
    {
        printf("\nBoth the roots are real and unequal which are x1 = %f and x2 = %f", (-b + sqrt((b * b) - (4.0 * a * c))) / (2.0 * a), (-b - sqrt((b * b) - (4.0 * a * c))) / (2.0 * a));
    }
}