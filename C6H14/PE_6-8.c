#include <stdio.h>
int main()
{
    float total;
    int str;
    printf("\nEnter the purchase amount: ");
    scanf("%f", &total);
    printf("\nEnter the type of item bought(press 1 for Mill OR press 2 for Handloom): ");
    scanf("%d", &str);
    switch (str)
    {
    case 1:
        if (total >= 101.0 && total <= 200.0)
        {
            total -= (total * 0.05);
        }
        if (total >= 201.0 && total <= 300.0)
        {
            total = total - (total * 0.075);
        }
        if (total > 300)
        {
            total -= (total * 0.1);
        }
        break;
    case 2:
        if (total >= 0 && total <= 100)
        {
            total -= (total * 0.05);
        }
        if (total >= 101 && total <= 200)
        {
            total -= (total * 0.075);
        }
        if (total >= 201 && total <= 300)
        {
            total -= (total * 0.1);
        }
        if (total > 300)
        {
            total -= (total * 0.15);
        }
        break;
    }
    printf("\nNet amount to be paid by customer: Rs %.2f", total);
}