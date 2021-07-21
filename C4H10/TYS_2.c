#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, r1, r2;
    printf("\nEnter the coefficients of ax^2 + bx + c as a,b,c resp: ");
    scanf("%f%f%f", &a, &b, &c);
    D = (b * b) - (4.0 * a * c);
    if (D > 0)
    {
        printf("\nRoots will exist and are real and unequal.\n");
        r1 = (-b - sqrt(D)) / (2 * a);
        r2 = (-b + sqrt(D)) / (2 * a);
        printf("\nThe roots are: %f and %f", r1, r2);
    }
    else if (D == 0)
    {
        printf("\nRoots will exist and are equal.\n");
        r1 = -b / (2 * a);
        printf("\nThe roots are %f and %f", r1, r1);
    }
    else if (D < 0)
    {
        printf("\nThe roots are imaginary and will not exist.");
    }
}