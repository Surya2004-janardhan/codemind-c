#include<stdio.h>
int main()
{
    int a,sum,rem,n=1;
    scanf("%d",&a);
    sum=0;
    while(a>0)
    {
        rem=a%10;
        a=a/10;
        sum=sum+rem;
        n=n*rem;
    }
    printf("%d",n-sum);
}
    
    