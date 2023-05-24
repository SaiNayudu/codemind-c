#include<stdio.h>
int main()
{
	int n,rem,r=0,t;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		r=r*10+rem;
	}
	if(t==r)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}