#include <stdio.h>
int main()
{
    int i, a[100], sum = 0;
    printf("\nEnter an ISBN number: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 9; i++)
    {
        sum += ((i+1) * a[i]);
    }
    if (sum%11 == a[9])
    {
        printf("\nIt is a valid ISBN number.");
    }
    else
    {
        printf("\nIt is an invalid ISBN number.");
    }
}