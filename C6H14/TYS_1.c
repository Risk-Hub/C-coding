#include <stdio.h>
int main()
{
    int cp, sp;
    printf("\nEnter the cost price and selling price resp: ");
    scanf("%d%d", &cp, &sp);
    if (cp >= sp)
    {
        printf("\nNO PROFIT");
    }
    if (cp < sp)
    {
        printf("\nThe profit is: %d", sp - cp);
    }
}