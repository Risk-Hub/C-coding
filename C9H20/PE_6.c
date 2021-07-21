#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char s1[80], w[20], ch, sw[20], rw[20];
    int i, k;
    printf("\nEnter the parent string: ");
    scanf("%[^\n]", s1);
    printf("\nEnter the word to be replaed: ");
    scanf(" %[^\n]", sw);
    printf("\nEnter the new word: ");
    scanf(" %[^\n]", rw);
    printf("\nOutput = ");
    strcat(s1, " ");
    k = 0;
    for (i = 0; s1[i] != '\0'; i++)
    {
        ch = s1[i];
        if (ch != ' ')
        {
            w[k] = ch;
            k++;
        }
        else
        {
            w[k] = '\0';
            k = 0;
            if (strcmp(w, sw) == 0)
            {
                printf("%s ", rw);
            }
            else
            {
                printf("%s ", w);
            }
        }
    }
    getch();
}