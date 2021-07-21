#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100], temp[100];
    int m, n, i, j;
    printf("\nEnter a string s1: ");
    scanf("%[^\n]", s1);
    printf("\nEnter another string s2: ");
    scanf(" %[^\n]", s2);
    printf("\nEnter the no. of characters of s1 that you want to copy: ");
    scanf("%d", &m);
    printf("\nEnter the position(n) from where you want to start copy: ");
    scanf("%d", &n);
    for (i = n - 1, j = 0; i < n + m - 1; i++, j++)
    {
        temp[j] = s1[i];
    }
    printf("\nThe required string is: %s%s", s2,temp);
}