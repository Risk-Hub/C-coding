#include<stdio.h>
#include<math.h>
int main()
{
    float x;
    for(float i=0.0;i<=9.0;i+=1.0)
    {
        for(float j=0.0;j<=0.92;j+=0.1)
        {
            printf("%f  ",exp(-i-j));
        }
        printf("\n");
    }
}