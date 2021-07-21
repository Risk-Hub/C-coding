#include <stdio.h>
#include <math.h>
float s;
float perimeter(float a, float b, float c);
float area(float a, float b, float c);
float main()
{
    float a, b, c;
    char ch;
    printf("\nEnter the sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("\nChoose the funtion you want to do-\n");
    printf("Perimeter: P\nArea: A\n");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'P':
        perimeter(a, b, c);
        printf("\nRequired perimeter is: %f", perimeter(a, b, c));
        break;
    case 'A':
        area(a, b, c);
        printf("\nRequired area is: %f", area(a, b, c));
        break;
    default:
        printf("\nYour chosen option is incorrect");
        break;
    }
}
float perimeter(float a, float b, float c)
{
    s = (a + b + c) / 2.0;
    return 2.0 * s;
}
float area(float a, float b, float c)
{
    s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}