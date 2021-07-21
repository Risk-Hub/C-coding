#include <stdio.h>
int main()
{
    char s[100];
    printf("\nEnter a string: ");
    scanf("%[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int j = i; s[j] != '\0'; j++)
        {
            if (s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\nThe reversed string is: %s", s);
}