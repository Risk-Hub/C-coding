#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter the sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
    {
        if (a == b && b == c && a == c)
        {
            printf("\nThe triangle is equilateral.");
        }
        if (a != b && b != c && a != c)
        {
            printf("\nThe triangle is scalene.");
        }
        if ((a != b && (a == c || b == c)) || (b != c && (a == c || a == b)) || (a != c && (b == c || a == b)))
        {
            printf("\nThe triangle is isoceles.");
        }
    }
    else
    {
        printf("\nThe triangle with the given sides is not possible.");
    }
}