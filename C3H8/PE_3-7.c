#include <stdio.h>
int main()
{
    int n, temp, i = 1;
    printf("Enter a number to print its table: ");
    scanf("%d", &n);
    temp = n;
    printf("The required table of the given number is: ");
    while (i <= 10)
    {
        printf("%d  ", n);
        n += temp;
        i++;
    }
}