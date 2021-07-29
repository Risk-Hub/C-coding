#include <stdio.h>
struct date
{
    int day, month, year;
} temp;
struct date input(struct date temp);
struct date output(struct date temp);
int main()
{
    temp = input(temp);
    output(temp);
}
struct date input(struct date temp)
{
    long int n;
    printf("\nEnter the date: ");
    scanf("%ld", &n);
    temp.day = n % 100;
    temp.month = (n % 10000 - temp.day) / 100;
    temp.year = n / 10000;
    // scanf("%d%d%d", &temp.day, &temp.month, &temp.year);
    return temp;
}
struct date output(struct date temp)
{
    if (temp.month == 1)
    {
        if (temp.day > 31)
        {
            printf("\nJanuary has only 31 days");
        }
        else
        {
            printf("\nJanuary %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month == 2)
    {
        if (temp.day > 29)
        {
            printf("\nFebruary has only 29 days");
        }
        if (temp.day == 29)
        {
            if (temp.year % 4 != 0)
            {
                printf("\n%d is not a LEAP YEAR", temp.year);
            }
        }
        else
        {
            printf("\nFebrurary %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month == 3)
    {
        if (temp.day > 31)
        {
            printf("\nMarch has only 31 days");
        }
        else
        {
            printf("\nMarch %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month == 4)
    {
        if (temp.day > 30)
        {
            printf("\nApril has only 30 days");
        }
        else
        {
            printf("\nApril %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month == 5)
    {
        if (temp.day > 31)
        {
            printf("\nMay has only 31 days");
        }
        else
        {
            printf("\nMay %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month == 6)
    {
        if (temp.day > 30)
        {
            printf("\nJune has only 30 days");
        }
        else
        {
            printf("\nJune %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month == 7)
    {
        if (temp.day > 31)
        {
            printf("\nJuly has only 31 days");
        }
        else
        {
            printf("\nJuly %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month == 8)
    {
        if (temp.day > 31)
        {
            printf("\nAugust has only 31 days");
        }
        else
        {
            printf("\nAugust %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month == 9)
    {
        if (temp.day > 30)
        {
            printf("\nSeptember has only 30 days");
        }
        else
        {
            printf("\nSeptember %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month == 10)
    {
        if (temp.day > 31)
        {
            printf("\nOctober has only 31 days");
        }
        else
        {
            printf("\nOctober %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month == 11)
    {
        if (temp.day > 30)
        {
            printf("\nNovember has only 30 days");
        }
        else
        {
            printf("\nNovember %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month == 12)
    {
        if (temp.day > 31)
        {
            printf("\nDecember has only 31 days");
        }
        else
        {
            printf("\nDecember %d, %d", temp.day, temp.year);
        }
    }
    if (temp.month > 12)
    {
        printf("\nNo such month exists");
    }
}