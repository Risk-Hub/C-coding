#include <stdio.h>
int main()
{
    int c = 0, a[10];
    printf("\nEnter the age of persons: ");
    for (int i = 0; i <= 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 10; i++)
    {
        if (a[i] < 50 && a[i] > 60)
            continue;
        c++;
    }
    printf("\nPersons lying in the age froup 50-60 are: %d", c);
}