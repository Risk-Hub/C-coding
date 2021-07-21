#include <stdio.h>
#include <math.h>
int main()
{
    long int n, temp, sum = 0, i = 1;
    printf("\nEnter a number: ");
    scanf("%ld", &n);
    temp = n;
    while (n)
    {
        n = n % 10;
        sum += n;
        n = temp / pow(10, i);
        i++;
    }
    printf("\nThe sum of digits is: %d", sum);
}