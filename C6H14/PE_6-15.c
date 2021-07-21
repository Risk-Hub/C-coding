#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    double x;
    char T;
    printf("\nEnter the value of angle(in radians): ");
    scanf("%lf", &x);
    getchar();
    printf("\nEnter the character for T: ");
    scanf("%c", &T);
    if (T == 's' || T == 'S')
    {
        printf("\nsin(x) = %lf", sin(x));
    }
    if (T == 'c' || T == 'C')
    {
        printf("\ncos(x) = %lf", cos(x));
    }
    else if (T == 't' || T == 'T')
    {
        printf("\ntan(x) = %lf", tan(x));
    }
    switch (T)
    {
    case 's':
    case 'S':
        printf("\nsin(x) = %lf", sin(x));
        break;

    case 'c':
    case 'C':
        printf("\ncos(x) = %lf", cos(x));
        break;

    case 't':
    case 'T':
        printf("\ntan(x) = %lf", tan(x));
        break;
    }
}