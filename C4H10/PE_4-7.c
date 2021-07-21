#include <stdio.h>
#include <math.h>
int main()
{
    float dr, sc, hc, eoq, tbo;
    printf("\nEnter Demand Rate, Setup Costs and Holding Costs resp: ");
    scanf("%f%f%f", &dr, &sc, &hc);
    eoq = sqrt((2.0 * dr * sc) / hc);
    tbo = sqrt((2.0 * sc) / (dr * hc));
    printf("\nEOQ = %f\nTBO = %f", eoq, tbo);
}