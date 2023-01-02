#include<stdio.h>
int main()
{
	int r,c,i,j,s=0;
	scanf("%d%d",&r,&c);
	int x[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s=s+x[i][j];
		}
	}
		printf("%d",s);
}