#include <stdio.h>
int main()
{
    int i,positive=0, negative=0;
    printf("Start entering the numbers one by one:\n\n");
    do
    {
        scanf("%d",&i);
        if (i>0)
        {
            positive++;
        }
        else if (i<0)
        {
            negative++;
        }
    }
    while(i!=0);
    printf("Number of positive entries: %d",positive);
    printf("\nNumber of negative entries: %d",negative);
}