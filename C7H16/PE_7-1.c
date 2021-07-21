#include <stdio.h>
#include <math.h>
int main()
{
    long int n, temp, i = 1;
    printf("\nEnter a number: ");
    scanf("%ld", &n);
    temp = n;
    printf("\nNumber after digits reversed: ");
    while (n)
    {
        n = n % 10;
        printf("%d", n);
        n = temp / pow(10, i);
        i++;
    }
}