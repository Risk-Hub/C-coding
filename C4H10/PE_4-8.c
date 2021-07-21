#include <stdio.h>
#include <math.h>
int main()
{
    float r, l, c = 0.01, freq;
    printf("\nEnter the values of Inductance and Resistance: ");
    scanf("%f%f", &l, &r);
    for (int i = 1; i <= 10; i++)
    {
        freq = sqrt((1.0 / (l * c)) - ((r * r) / (4.0 * c * c)));
        printf("\nFrequency at C = %f is %f", c, freq);
        c += 0.01;
    }
}