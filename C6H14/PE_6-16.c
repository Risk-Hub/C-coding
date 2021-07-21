#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the numeric week day value: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("\nMONDAY");
        break;
    case 2:
        printf("\nTUESDAY");
        break;
    case 3:
        printf("\nWEDNESDAY");
        break;
    case 4:
        printf("\nTHURSDAY");
        break;
    case 5:
        printf("\nFRIDAY");
        break;
    case 6:
        printf("\nSATURDAY");
        break;
    case 7:
        printf("\nSUNDAY");
        break;
    }
}