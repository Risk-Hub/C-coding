#include <stdio.h>
int x, y;
void swap(int x, int y);
void main()
{
    printf("\nEnter the values of x and y resp: ");
    scanf("%d%d", &x, &y);
    swap (x,y);
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swapping, x = %d and y = %d",x,y);
}