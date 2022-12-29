#include<stdio.h>
int main()
{
    int l,r,i,b=0,k;
    scanf("%d%d%d",&l,&r,&k);
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        {
        b++;
        }
    }
    printf("%d",b);
}