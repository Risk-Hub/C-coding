#include <stdio.h>
int main()
{
    int dep, pp, sv, years;
    printf("\nEnter Purchase price, Years of service and Annual depreciation resp: ");
    scanf("%d%d%d", &pp, &years, &dep);
    sv = pp - (dep * years);
    printf("Salvage Value: %d", sv);
}