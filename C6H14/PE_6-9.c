#include <stdio.h>
int main()
{
    float x;
    int choice, res;
    printf("\nEnter the value of x: ");
    scanf("%f", &x);
    printf("\n1. Using nested if statements");
    printf("\n2. Using else if statements");
    printf("\n3. Using conditional operator ?:");
    printf("\nEnter your choice(1/2/3): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        if (x >= 0)
        {
            if (x > 0)
            {
                printf("\ny = 1");
                goto jump;
            }
            printf("\ny = 0");
        }
        else
        {
            printf("\ny = -1");
        }
    jump:
        break;

    case 2:
        if (x == 0)
        {
            printf("\ny = 0");
        }
        else if (x > 0)
        {
            printf("\ny = 1");
        }
        else if (x < 0)
        {
            printf("\ny = -1");
        }
        break;

    case 3:
        res = (x > 0 ? 1 : (x == 0 ? 0 : -1));
        printf("\ny = %d", res);
        break;
    }
}