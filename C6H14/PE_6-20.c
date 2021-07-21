#include <stdio.h>
#include <ctype.h>
int main()
{
    int i, len = 0,c=0,d=0;
    char str[1000];
    printf("\nEnter the string: ");
    scanf("%[^\n]*c", str);
    len = sizeof(str) / sizeof(str[0]);
    for (i = 0; i < len; i++)
    {
        if (islower(str[i]))
        {
            c++;
        }
        else if (isupper(str[i]))
        {
            d++;
        }
    }
    printf("\nNumber of capital alphabets: %d", c);
    printf("\nNumber of small alphabets: %d", d);
}