#include <stdio.h>
int polynomial(int a[], int n, int x);
int main()
{
    int a[100], x, n;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    printf("\nEnter the value of x: ");
    scanf("%d", &x);
    printf("\nEnter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe polynomial after evaluation is: %d", polynomial(a, n, x));
}
int polynomial(int a[], int n, int x)
{
    int polysum;
    polysum = a[0];
    for (int i = 1; i < n; i++)
    {
        polysum = polysum * x + a[i];
    }
    return polysum;
}