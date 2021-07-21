#include <stdio.h>
int main()
{
    char c;
    printf("\nEnter a character: ");
    scanf("%c", &c);
    if (c >= 48 && c <= 57)
    {
        printf("\n%c is a Digit.", c);
    }
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        printf("\n%c is an Alphabet.", c);
    }
}