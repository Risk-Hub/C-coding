#include <stdio.h>
int main()
{
    int x = 1, y = 1, c = 1, m, temp;
    printf("\nEnter the value of m: ");
    scanf("%d", &m);
    printf("\n%d %d ", x, y);
    do
    {
        temp = y;
        y = x + y;
        printf("%d ", y);
        x = temp;
        c++;
    } while (c < m - 1);
}