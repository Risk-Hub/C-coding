#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the two angles of the triangle(in degree): ");
    scanf("%d%d",&a,&b);
    printf("\nThe third angle is: %ddegree",360-a-b);
}