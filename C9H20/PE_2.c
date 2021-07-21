#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100];
    char s2[100] = {'D', 'e', 'n', 'n', 'i', 's', ' ', 'R', 'i', 't', 'c', 'h', 'i', 'e', '\0'};
    int i;
    printf("\nWho is the inventor of C ? ");
    for (i = 0; i < 3; i++)
    {
        gets(s1);
        if (s1[i] == s2[i])
        {
            printf("\nGood");
            break;
        }
        else
        {
            if (i <= 1)
                printf("\nTry Again\n");
        }
        if (i == 2)
        {
            printf("\nThe correct answer is Dennis Ritchie.");
        }
    }
}