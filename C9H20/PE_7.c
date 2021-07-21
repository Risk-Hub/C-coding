#include <stdio.h>
#include <string.h>
int main()
{
    char s1[4][100], s2[4][100], s3[4][100];
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("\nEnter the details for vehicle-%d:-\n", i + 1);
        printf(" Enter the vehicle type: ");
        // scanf("%[^\n]",s1[i][100]);
        gets(s1[i]);
        printf(" Enter the month of sales: ");
        // scanf(" %[^\n]",s2[i][100]);
        gets(s2[i]);
        printf(" Enter the price: ");
        // scanf(" %[^\n]",s3[i][100]);
        gets(s3[i]);
    }
    printf("\n");
    printf("Vehicle type \tMonth of Sales \tPrice \n");
    for (i = 0; i < 4; i++)
    {
        printf("%s \t %s      \t%s\n", s1[i], s2[i], s3[i]);
    }
}