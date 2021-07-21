#include <stdio.h>
int main()
{
    int a[1000], n, i = 0, k = 0, temp;
    int l = 0, m = 0, v = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        a[i] = n % 10;
        i++;
        k++;
        n = n / 10;
    }
    for (i = 0; i < k; i++)
    {
        switch (a[i])
        {
        case 0:
            l++;
            break;
        case 1:
            m++;
            break;
        case 2:
            v++;
            break;
        case 3:
            o++;
            break;
        case 4:
            p++;
            break;
        case 5:
            q++;
            break;
        case 6:
            r++;
            break;
        case 7:
            s++;
            break;
        case 8:
            t++;
            break;
        case 9:
            u++;
            break;
        }
    }
    printf("\nFrequency of 0 is: %d", l);
    printf("\nFrequency of 1 is: %d", m);
    printf("\nFrequency of 2 is: %d", v);
    printf("\nFrequency of 3 is: %d", o);
    printf("\nFrequency of 4 is: %d", p);
    printf("\nFrequency of 5 is: %d", q);
    printf("\nFrequency of 6 is: %d", r);
    printf("\nFrequency of 7 is: %d", s);
    printf("\nFrequency of 8 is: %d", t);
    printf("\nFrequency of 9 is: %d", u);
}