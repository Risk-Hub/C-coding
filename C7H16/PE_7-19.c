#include <stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1-i; j++)
        {
            printf("  ");
        }
        while (j>=n-1-i)
        {
            printf("%d ",);
        }
        
    }
}