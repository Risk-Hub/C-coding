#include <stdio.h>
#include <string.h>
char sentence(char[]);
int main(void)
{
    char str[100];
    printf("\nEnter a string: ");
    scanf("%[^\n]", str);
    sentence(str);
}
char sentence(char str[])
{
    int n;
    n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }
    printf("%s", str);
}