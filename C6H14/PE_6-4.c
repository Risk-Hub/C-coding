#include <stdio.h>
int main()
{
    int a[1000], i, students, b = 0, c = 0, d = 0, e = 0;
    printf("\nEnter the number of students: ");
    scanf("%d", &students);
    printf("\nEnter the students' marks one by one: ");
    for (i = 0; i < students; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < students; i++)
    {
        if (a[i] >= 0)
        {
            if (a[i] >= 41)
            {
                if (a[i] >= 61)
                {
                    if (a[i] >= 81 && a[i] <= 100)
                    {
                        b++;
                    }
                    else
                    {
                        e++;
                    }
                }
                else
                {
                    c++;
                }
            }
            else
            {
                d++;
            }
        }
    }
    printf("\nNo. of students who scored more than 80 marks: %d", b);
    printf("\nNo. of students who scored more than 60 marks: %d", b + e);
    printf("\nNo. of students who scored more than 40 marks: %d", b + c + e);
    printf("\nNo. of students in the range of 81 to 100: %d", b);
    printf("\nNo. of students in the range of 61 to 80: %d", e);
    printf("\nNo. of students in the range of 41 to 60: %d", c);
    printf("\nNo. of students in the range of 0 to 40: %d", d);
}