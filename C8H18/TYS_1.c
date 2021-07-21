#include <stdio.h>
int main()
{
    int i, temp, a[10];
    printf("\nEnter 10 integers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    temp = a[0];
    for (i = 0; i < 9; i++)
    {
        if (temp < a[i])
        {
            temp = a[i];
        }
    }
    printf("\nThe largest value is: %d", temp);
}