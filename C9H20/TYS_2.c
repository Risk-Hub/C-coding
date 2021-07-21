#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    printf("\nEnter first string: ");
    scanf("%[^\n]", s1);
    printf("\nEnter second string: ");
    scanf(" %[^\n]", s2);
    if (strstr(s1, s2) == NULL)
    {
        printf("\nSubstring not found");
    }
    else
    {
        printf("\n\"%s\" is a sub-string of \"%s\"", s2, s1);
    }
}