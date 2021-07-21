#include <stdio.h>
int main()
{
    int i, c = 0;
    char str[100];
    printf("\nInput a character string: ");
    scanf("%s", str);
    for (i = 0; i >= 0; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            break;
        }
        c++;
    }
    printf("\nLength of the character string: %d", c);
}