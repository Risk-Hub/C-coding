#include <stdio.h>
char copy(char[], char[]);
char compare(char[], char[]);
char add(char s1[], char s2[]);
char main(void)
{
    char s1[100], s2[100], ch;
    printf("\nEnter first string: ");
    scanf("%[^\n]", s1);
    printf("\nEnter second string: ");
    scanf(" %[^\n]", s2);
    printf("\nChhose a option:-");
    printf("\nA: Copy s1 to s2");
    printf("\nB: Compare s1 and s2");
    printf("\nC: Add s1 to the end of s2\n\n");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'A':
        copy(s1, s2);
        break;
    case 'B':
        compare(s1, s2);
        break;
    case 'C':
        add(s1, s2);
        break;
    default:
        printf("\nYou have chosen wrong option");
        break;
    }
}
char copy(char s1[], char s2[])
{
    int i;
    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("String s2 is: %s", s2);
}
char compare(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            goto read;
        }
        i++;
    }
    printf("\nThe strings are equal");
    goto cf;
read:
    printf("\nThe strings are not equal");
    cf:;
}
char add(char s1[], char s2[])
{
    int i, j, lens1 = 0, lens2 = 0;
    char s3[100];
    for (i = 0; s2[i] != '\0'; i++)
    {
        s3[i] = s2[i];
    }
    j = i;
    for (i = 0; s1[i] != '\0'; i++)
    {
        s3[j] = s1[i];
        j++;
    }
    s3[j] = '\0';
    printf("\nString after adding: %s", s3);
}