#include<stdio.h>
int main()
{
	long long int m,cnt=0;
	scanf("%lld",&m);
	while(m>0)
	{
		m=m/10;
		cnt++;
	}
	if(cnt==10)
	{
		printf("Valid");
	}
	else
	{
		printf("Invalid");
	}
}