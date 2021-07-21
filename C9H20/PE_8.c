#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], temp[100];
    int i, n, c = 0;
    printf("\nEnter a string: ");
    scanf("%[^\n]", s);
    n = strlen(s);
    for (i = 0; i < n; i++)
    {
        temp[i] = s[i];
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            c++;
        }
    }
    if (c == n)
    {
        printf("\n%s is Palindorme", temp);
    }
    else
    {
        printf("\n%s is not Palindrome", temp);
    }
}