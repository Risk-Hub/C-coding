#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, j = 0, n;
    char s[100], small[100], large[100], word[100][100];
    printf("\nEnter a string: ");
    scanf("%[^\n]", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            word[i][j++] = s[i];
        }
        else
        {
            word[i][j] = '\0';
            i++;
            j = 0;
        }
    }
    n = i + 1;
    strcpy(small, word[0]);
    strcpy(large, word[0]);
    for (i = 0; i < n; i++)
    {
        if (strlen(large) < strlen(word[i]))
        {
            strcpy(large, word[i]);
        }
        if (strlen(small) > strlen(word[i]))
        {
            strcpy(small, word[i]);
        }
    }
    printf("\nLargest word: %s", large);
    printf("\nSmallest word: %s", small);
}