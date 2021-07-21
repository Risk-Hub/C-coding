#include <stdio.h>
int main()
{
    int c = 0, sum = 0;
    printf("\nThe required numbers are: ");
    for (int i = 0; i <= 100; i++)
    {
        if (i % 6 == 0 && i % 4 != 0)
        {
            printf("%d ", i);
            c++;
            sum += i;
        }
    }
    printf("\nThe numbers of such nos. are: %d", c);
    printf("\nRequired sum of the nos. are: %d", sum);
}