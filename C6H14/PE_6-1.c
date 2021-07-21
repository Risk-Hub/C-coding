#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("\nNUMBER IS EVEN");
    }
    else if (n % 2 != 0)
    {
        printf("\nNUMBER IS ODD");
    }
}