#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int b,p=1,i;
        scanf("%d",&b);
        for(i=1;i<=b;i++)
        {
            p=p*i;
        }
        printf("%d
",p);
    }
}