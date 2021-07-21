#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100];
    int i, n;
    printf("\nEnter the cost of an item: ");
    scanf("%[^\n]", s1);
    n = strlen(s1);
    if(n==7)
    {
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            if(s1[i]=='1')
            {
                printf("\nONE THOUSAND ");
            }
            if(s1[i]=='2')
            {
                printf("TWO THOUSAND ");
            }
            if(s1[i]=='3')
            {
                printf("THREE THOUSAND ");
            }
            if(s1[i]=='4')
            {
                printf("FOUR THOUSAND ");
            }
            if(s1[i]=='5')
            {
                printf("FIVE THOUSAND ");
            }
            if(s1[i]=='6')
            {
                printf("SIX THOUSAND ");
            }
            if(s1[i]=='7')
            {
                printf("SEVEN THOUSAND ");
            }
            if(s1[i]=='8')
            {
                printf("EIGHT THOUSAND ");
            }
            if(s1[i]=='9')
            {
                printf("NINE THOUSAND ");
            }
        }
        if(i==1)
        {
            if(s1[i]=='1')
            {
                printf("\nONE HUNDRED ");
            }
            if(s1[i]=='2')
            {
                printf("TWO HUNDRED ");
            }
            if(s1[i]=='3')
            {
                printf("THREE HUNDRED ");
            }
            if(s1[i]=='4')
            {
                printf("FOUR HUNDRED ");
            }
            if(s1[i]=='5')
            {
                printf("FIVE HUNDRED ");
            }
            if(s1[i]=='6')
            {
                printf("SIX HUNDRED ");
            }
            if(s1[i]=='7')
            {
                printf("SEVEN HUNDRED ");
            }
            if(s1[i]=='8')
            {
                printf("EIGHT HUNDRED ");
            }
            if(s1[i]=='9')
            {
                printf("NINE HUNDRED ");
            }
        }
        if(i==2)
        {
            if(s1[i]=='1')
            {
                printf("\n ");
            }
            if(s1[i]=='2')
            {
                printf("TWO THOUSAND ");
            }
            if(s1[i]=='3')
            {
                printf("THREE THOUSAND ");
            }
            if(s1[i]=='4')
            {
                printf("FOUR THOUSAND ");
            }
            if(s1[i]=='5')
            {
                printf("FIVE THOUSAND ");
            }
            if(s1[i]=='6')
            {
                printf("SIX THOUSAND ");
            }
            if(s1[i]=='7')
            {
                printf("SEVEN THOUSAND ");
            }
            if(s1[i]=='8')
            {
                printf("EIGHT THOUSAND ");
            }
            if(s1[i]=='9')
            {
                printf("NINE THOUSAND ");
            }
        }
    }
    }
}