#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i, n;
    printf("\nEnter a string: ");
    scanf("%[^\n]", s);
    n = strlen(s);
    for (i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            
        }
    }
    printf("\n%s", s);
}