#include <stdio.h>
int main()
{
    char s1[100], s2[100];
    int n1 = 0, n2 = 0, var2 = 0, i;
    printf("\nEnter first string s1: ");
    scanf("%[^\n]", s1);
    printf("\nEnter second string s2: ");
    scanf(" %[^\n]", s2);
    for (i = 0; s1[i] != '\0'; i++)
    {
        n1++;
    }
    for (i = 0; s2[i] != '\0'; i++)
    {
        n2++;
    }
    for (i = 0; i < n1; i++)
    {
        if (s1[i] == s2[i])
        {
            var2++;
        }
        if (s1[i] != s2[i])
        {
            if (s1[i] < s2[i])
            {
                printf("\nFirst string is aplhabetically above second string");
            }
            else
            {
                printf("\nSecond string is alphabetically above first string");
            }
        }
    }
    if (var2 == n1 && var2 == n2)
    {
        printf("\nBoth strings are equal");
    }
}