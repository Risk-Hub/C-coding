#include <stdio.h>
int main()
{
    int i, j, a[500][500], n, sum = 0, h1, h2, h3, temp, r;
    printf("\nEnter the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the details of student-%d:-\n", i + 1);
        printf("Enter roll no.: ");
        scanf("%d", &a[i][0]);
        for (j = 1; j <= 3; j++)
        {
            printf("Enter subject-%d marks: ", j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nRoll No.     Subject-1       Subject-2       Subject-3      Total Marks");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t\t", a[i][0]);
        for (j = 1; j <= 3; j++)
        {
            printf("%d\t\t", a[i][j]);
            sum += a[i][j];
        }
        printf("%d", sum);
        printf("\n");
        sum = 0;
    }
    h1 = a[0][1];
    for (i = 0; i < n; i++)
    {
        if (h1 <= a[i][1])
        {
            h1 = a[i][1];
            temp = i;
        }
    }
    printf("\nHighest marks in subject-1 is scored by Roll No.-%d having %d marks", temp + 1, h1);
    temp = 0;
    h2 = a[0][2];
    for (i = 0; i < n; i++)
    {
        if (h2 <= a[i][2])
        {
            h2 = a[i][2];
            temp = i;
        }
    }
    printf("\nHighest marks in subject-2 is scored by Roll No.-%d having %d marks", temp + 1, h2);
    temp = 0;
    h3 = a[0][3];
    for (i = 0; i < n; i++)
    {
        if (h3 <= a[i][3])
        {
            h3 = a[i][3];
            temp = i;
        }
    }
    printf("\nHighest marks in subject-3 is scored by Roll No.-%d having %d marks", temp + 1, h3);
    temp = a[0][1] + a[0][2] + a[0][3];
    r = 0;
    for (i = 1; i < n; i++)
    {
        sum = 0;
        for (j = 1; j <= 3; j++)
        {
            sum += a[i][j];
            if (temp <= sum)
            {
                temp = sum;
                r = i;
            }
        }
    }
    printf("\nHighest total marks is scored by Roll No.-%d having %d marks", r + 1, temp);
}