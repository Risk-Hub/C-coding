#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    printf("\nEnter 5 subject marks: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    printf("\nAverage of marks: %f",(m1+m2+m3+m4+m5)/5.0);
}