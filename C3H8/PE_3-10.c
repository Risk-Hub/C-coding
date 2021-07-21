#include <stdio.h>
int main()
{
    int days, weeks, years, temp;
    printf("\nEnter the number of days: ");
    scanf("%d", &temp);
    years = temp / 365;
    weeks = (temp - (years * 365)) / 7;
    days = (temp - (years * 365) - (weeks * 7));
    printf("\nYears = %d\nWeeks = %d\nDays = %d", years, weeks, days);
}