#include <stdio.h>
int main()
{
    int n, c = 0, sum = 0;
    for (n = 101; n < 200; n++)
    {
        if (n > 100 && n < 200 && n % 7 == 0)
        {
            c++;
            sum += n;
        }
    }
    printf("\nThe numbers of digits are: %d", c);
    printf("\nThe sum of digits are: %d\n\n", sum);
}