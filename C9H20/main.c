#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("ThreeParas.txt", "w+");
    char str[1000], i, ch;
    gets(str);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            fputc('$', fp);
        }
        else
        {
            fputc(str[i], fp);
        }
    }
    fclose(fp);
    fp = fopen("ThreeParas.txt", "r+");
    ch = fgetc(fp);
    for (i = 0; str[i]; i++)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
}