#include <stdio.h>
int main()
{
    float u, t, a, s;
    printf("\nEnter Initial Velocity and Acceleration resp: ");
    scanf("%f%f", &u, &a);
    printf("\nEnter the time interval(in sec): ");
    scanf("%f", &t);
    s = (u * t) + (0.5 * a * t * t);
    printf("\nDistance travelled: %f", s);
}