#include <stdio.h>
int main()
{
    int n,a[1000000],b[1000000],q,i=0,j=0,c=0,d=0,x=0,ans;
    scanf("%d",&n);
    while(n>0)
    {
        q=n/2;
        a[i]=n%2;
        n=q;
        i++;
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(a[c-i-1]==1)
        {
            d++;
        }
        if(!a[c-i-1])
        {
            b[j]=d;
            d=0;
            j++;
            x++;
        }
    }
    if(x)
    {
    for(j=0;j<x;j++)
    {
        for(int k=0;k<x;k++)
        if(b[j]<b[k])
        {
            ans=b[k];
        }
        else
        {
            ans=b[j];
        }
    }
    printf("%d",ans);
    }
    else
    {
        printf("%d",d);
    }
}