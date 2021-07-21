#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int n;
    printf("\nEnter the first string: ");
    scanf("%[^\n]", s1);
    printf("\nEnter the no. of characters to be read: ");
    scanf("%d", &n);
    printf("\nEnter the second string: ");
    scanf(" %[^\n]", s2);
    if (strncmp(s2, s1, n) == 0)
    {
        printf("\nBoth the strings are equal");
    }
    if (strncmp(s2, s1, n) > 0)
    {
        printf("\nThe first string is greater than the second string");
    }
    if (strncmp(s2, s1, n) < 0)
    {
        printf("\nThe first string is less than the second string");
    }
}