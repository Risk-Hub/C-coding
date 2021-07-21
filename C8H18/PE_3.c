#include <stdio.h>
int main()
{
    int i, a[100], n, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, sp = 0;
    printf("\nEnter the number of voters: ");
    scanf("%d", &n);
    printf("\nEnter the votes(candidate's number) one by one: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        switch (a[i])
        {
        case 1:
            a1++;
            break;
        case 2:
            a2++;
            break;
        case 3:
            a3++;
            break;
        case 4:
            a4++;
            break;
        case 5:
            a5++;
            break;
        default:
            sp++;
        }
    }
    printf("\nVotes polled for candidate 1: %d",a1);
    printf("\nVotes polled for candidate 2: %d",a2);
    printf("\nVotes polled for candidate 3: %d",a3);
    printf("\nVotes polled for candidate 4: %d",a4);
    printf("\nVotes polled for candidate 5: %d",a5);
    printf("\nSpoilt Ballots: %d",sp);
}