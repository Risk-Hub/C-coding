#include <stdio.h>
#include <string.h>
int find();
int main()
{
    printf("\n%d", find());
}
int find()
{
    char s[100], ch;
    int n, i, c = 0;
    printf("\nEnter the string: ");
    scanf("%[^\n]", s);
    printf("\nEnter a character: ");
    scanf(" %c", &ch);
    n = strlen(s);
    for (i = 0; i < n; i++)
    {
        if (ch == s[i])
        {
            return 1;
            c++;
        }
    }
    if (!c)
    {
        return 0;
    }
}