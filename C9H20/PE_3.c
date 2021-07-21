#include <stdio.h>
int main()
{
    char s[100];
    int i, m, n;
    printf("\nEnter a string: ");
    scanf("%[^\n]", s);
    printf("\nEnter the number of characters to be extracted: ");
    scanf("%d", &m);
    printf("\nEnter the position of the character from where to start the extraction: ");
    scanf("%d", &n);
    printf("\nThe extracted string is: ");
    for (i = n - 1; i < n + m - 1; i++)
    {
        printf("%c", s[i]);
    }
}