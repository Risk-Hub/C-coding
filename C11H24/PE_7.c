#include <stdio.h>
struct date
{
    int day, month, year;
} temp;
struct date input(struct date temp);
struct date output(struct date temp);
int main()
{
    struct date var;
    var = input(temp);
    output(var);
}
struct date input(struct date temp)
{
    printf("\nEnter the date like dd:mm:yyyy:: ");
    scanf("%d%d%d", &temp.day, &temp.month, &temp.year);
    return temp;
}
struct date output(struct date temp)
{
    int n;
    printf("\nEnter the number of days to be added: ");
    scanf("%d", &n);
    if (temp.month == 1)
    {
        if (temp.day > 31)
        {
            printf("\nJanuary has only 31 days");
            goto end;
        }
        else
        {
            temp.day += n;
            if (temp.day > 31)
            {
                temp.day -= 31;
                temp.month++;
            }
        }
        goto print;
    }
    if (temp.month == 2)
    {
        if (temp.day > 29)
        {
            printf("\nFebruary has only 29 days");
            goto end;
        }
        if (temp.day == 29)
        {
            if (temp.year % 4 != 0)
            {
                printf("\n%d is not a LEAP YEAR", temp.year);
                goto end;
            }
            else if (temp.year % 4 == 0)
            {
                temp.day -= 29;
                temp.month++;
            }
        }
        else
        {
            temp.day += n;
            if (temp.day > 28)
            {
                temp.day -= 28;
                temp.month++;
            }
        }
        goto print;
    }
    if (temp.month == 3)
    {
        if (temp.day > 31)
        {
            printf("\nMarch has only 31 days");
            goto end;
        }
        else
        {
            temp.day+=n;
            if (temp.day > 31)
            {
                temp.day -= 31;
                temp.month++;
            }
        }
        goto print;
    }
    if (temp.month == 4)
    {
        if (temp.day > 30)
        {
            printf("\nApril has only 30 days");
            goto end;
        }
        else
        {
            temp.day+=n;
            if (temp.day > 30)
            {
                temp.day -= 30;
                temp.month++;
            }
        }
        goto print;
    }
    if (temp.month == 5)
    {
        if (temp.day > 31)
        {
            printf("\nMay has only 31 days");
            goto end;
        }
        else
        {
            temp.day+=n;
            if (temp.day > 31)
            {
                temp.day -= 31;
                temp.month++;
            }
        }
        goto print;
    }
    if (temp.month == 6)
    {
        if (temp.day > 30)
        {
            printf("\nJune has only 30 days");
            goto end;
        }
        else
        {
            temp.day+=n;
            if (temp.day > 30)
            {
                temp.day -= 30;
                temp.month++;
            }
        }
        goto print;
    }
    if (temp.month == 7)
    {
        if (temp.day > 31)
        {
            printf("\nJuly has only 31 days");
            goto end;
        }
        else
        {
            temp.day+=n;
            if (temp.day > 31)
            {
                temp.day -= 31;
                temp.month++;
            }
        }
        goto print;
    }
    if (temp.month == 8)
    {
        if (temp.day > 31)
        {
            printf("\nAugust has only 31 days");
            goto end;
        }
        else
        {
            temp.day+=n;
            if (temp.day > 31)
            {
                temp.day -= 31;
                temp.month++;
            }
        }
        goto print;
    }
    if (temp.month == 9)
    {
        if (temp.day > 30)
        {
            printf("\nSeptember has only 30 days");
            goto end;
        }
        else
        {
            temp.day+=n;
            if (temp.day > 30)
            {
                temp.day -= 30;
                temp.month++;
            }
        }
        goto print;
    }
    if (temp.month == 10)
    {
        if (temp.day > 31)
        {
            printf("\nOctober has only 31 days");
            goto end;
        }
        else
        {
            temp.day+=n;
            if (temp.day > 31)
            {
                temp.day -= 31;
                temp.month++;
            }
        }
        goto print;
    }
    if (temp.month == 11)
    {
        if (temp.day > 30)
        {
            printf("\nNovember has only 30 days");
            goto end;
        }
        else
        {
            temp.day+=n;
            if (temp.day > 30)
            {
                temp.day -= 30;
                temp.month++;
            }
        }
        goto print;
    }
    if (temp.month == 12)
    {
        if (temp.day > 31)
        {
            printf("\nDecember has only 31 days");
            goto end;
        }
        else
        {
            temp.day+=n;
            if (temp.day > 31)
            {
                temp.day -= 31;
                temp.month++;
                if (temp.month > 12)
                {
                    temp.month = 1;
                    temp.year++;
                }
            }
        }
        goto print;
    }
    if (temp.month > 12)
    {
        printf("\nNo such month exists");
        goto end;
    }
print:
    if (temp.month == 1)
    {
        printf("\nJanuary %d, %d", temp.day, temp.year);
    }
    if (temp.month == 2)
    {
        printf("\nFebrurary %d, %d", temp.day, temp.year);
    }
    if (temp.month == 3)
    {
        printf("\nMarch %d, %d", temp.day, temp.year);
    }
    if (temp.month == 4)
    {
        printf("\nApril %d, %d", temp.day, temp.year);
    }
    if (temp.month == 5)
    {
        printf("\nMay %d, %d", temp.day, temp.year);
    }
    if (temp.month == 6)
    {
        printf("\nJune %d, %d", temp.day, temp.year);
    }
    if (temp.month == 7)
    {
        printf("\nJuly %d, %d", temp.day, temp.year);
    }
    if (temp.month == 8)
    {
        printf("\nAugust %d, %d", temp.day, temp.year);
    }
    if (temp.month == 9)
    {
        printf("\nSeptember %d, %d", temp.day, temp.year);
    }
    if (temp.month == 10)
    {
        printf("\nOctober %d, %d", temp.day, temp.year);
    }
    if (temp.month == 11)
    {
        printf("\nNovember %d, %d", temp.day, temp.year);
    }
    if (temp.month == 12)
    {
        printf("\nDecember %d, %d", temp.day, temp.year);
    }
end:;
}