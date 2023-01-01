#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	for(y=1;y<=x;y++)
	{
	int n,i,fact=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d
",fact);
	}
}
