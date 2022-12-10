#include<stdio.h>
int main()
{
	int n,sqt,rem,sum=0;
	scanf("%d",&n);
	sqt=n*n;
	while(sqt!=0)
	{
		rem=sqt%10;
		sum+=rem;
		sqt/=10;
	}
	if(sum==n)
	printf("Neon Number",n);
	else
	printf("Not Neon Number",n);
}