#include <stdio.h>
int main()
{
    float a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("Sum of the values: %f", a + b + c);
    printf("\nAverage of the three values: %f", (a + b + c) / 3.0);
    if (a > b)
    {
        if (a > c)
        {
            printf("\n%f is the largest number.", a);
            if (b > c)
            {
                printf("\n%f is the smallest number.", c);
            }
            else
            {
                printf("\n%f is the smallest number.", b);
            }
        }
        else
        {
            printf("\n%f is the largest number.", c);
            printf("\n%f is the smallest number.", b);
        }
    }
    else if (b > c)
    {
        printf("\n%f is the largest number.", b);
        if (a > c)
        {
            printf("\n%f is the smallest number.", c);
        }
        else
        {
            printf("\n%f is the smallest number.", a);
        }
    }
    else
    {
        printf("\n%f is the largest number.", c);
        printf("\n%f is the smallest number.", a);
    }
}