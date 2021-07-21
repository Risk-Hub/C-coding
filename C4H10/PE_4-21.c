#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a%b==0)
    {
        printf("\nDivision is possible");
    }
    else
    {
        printf("\nDivision not possible");
    }
}