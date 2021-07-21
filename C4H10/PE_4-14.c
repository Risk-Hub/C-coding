#include <stdio.h>
#include <math.h>
int main()
{
    printf("\nx (degrees)\tsin(x)\tcos(x)\n\n");
    for (int i = 0; i <= 180; i += 15)
    {
        printf("%d\t        %.3f  \t%.3f\n", i, sin(i * 3.14 / 180.0), cos(i * 3.14 / 180.0));
    }
}