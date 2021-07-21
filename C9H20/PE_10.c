#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100][100], s2[100][100], s3[100][100];
    int i, n1, n2;
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter the details for student-%d:-\n", i + 1);
        printf(" Enter Roll No.: ");
        scanf(" %[^\n]", s1[i]);
        printf(" Enter student's name: ");
        scanf(" %[^\n]", s2[i]);
        printf(" Enter Marks Obtained: ");
        scanf(" %[^\n]", s3[i]);
    }
    printf("\n-------------------------------------------------------------------------------------------------\n");
    printf("Roll No.\tName\t\tMarks Obtained\n");
    for (i = 0; i < 3; i++)
    {
        printf("   %s   \t%s\t\t%s\n", s1[i], s2[i], s3[i]);
    }
    printf("-------------------------------------------------------------------------------------------------\n");
}