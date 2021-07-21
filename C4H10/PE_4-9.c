#include <stdio.h>
int main()
{
    int n, n1, n2, n3, n4;
    printf("\nEnter a four digit number: ");
    scanf("%d", &n);
    n1 = n % 10;
    n2 = ((n % 100) - n1) / 10;
    n3 = ((n % 1000) - (n % 100)) / 100;
    n4 = n / 1000;
    printf("\nThe sum of the digits is: %d", n1 + n2 + n3 + n4);
}