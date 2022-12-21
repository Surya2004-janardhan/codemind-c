#include<stdio.h>
int main()
{
	int a,rem,sum=0,n;
		scanf("%d",&a);
		n=a;
		while(a>0)
		{
		    rem=a%10;
		    a=a/10;
		    sum=sum*10+rem;
		}
		if(n==sum) 
		{
		    printf("True");
		}
		else
		{
		    printf("False");
		}
	return 0;
}