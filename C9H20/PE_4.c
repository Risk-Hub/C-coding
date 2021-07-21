#include <stdio.h>
int main()
{
    char s[100], c;
    int freq = 0;
    printf("\nEnter a string: ");
    scanf("%[^\n]", s);
    printf("\nEnter a word to find its occurence: ");
    scanf(" %c", &c);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (c == s[i])
        {
            freq++;
        }
    }
    printf("\n%c has occured %d times in the given string", c, freq);
}