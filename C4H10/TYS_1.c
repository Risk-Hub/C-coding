#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            printf("%c is a VOWEL", c);
        }
        else
        {
            printf("%c is a CONSONANT", c);
        }
    }
    else
    {
        printf("You have entered wrong character.");
    }
}