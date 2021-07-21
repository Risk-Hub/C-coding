#include <stdio.h>
#include <string.h>
int palindrome(char str[]);
int main()
{
    char str[100];
    if (palindrome(str) != 0)
    {
        printf("\nThe string is Palindrome");
    }
    else
    {
        printf("\nThe string is not Palindrome");
    }
}
int palindrome(char str[])
{
    char temp[100];
    int i, c = 0, n;
    printf("\nEnter the a string: ");
    scanf("%[^\n]", str);
    n = strlen(str);
    for (i = 0; i < n; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }
    for (i = 0; i < n; i++)
    {
        temp[i] = str[n - i - 1];
    }
    for (i = 0; i < n; i++)
    {
        if (temp[i] == str[i])
        {
            c++;
        }
    }
    if (c == n)
        return 1;
    else
        return 0;
}