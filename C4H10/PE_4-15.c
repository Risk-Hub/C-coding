#include<stdio.h>
#include<math.h>
int main()
{
    printf("\nNumber\tSquare-root\tSquare\n\n");
    for(int i=0;i<=100;i+=10)
    {
        printf("%d     \t%.4f    \t%d\n",i,sqrt(i),i*i);
    }
}