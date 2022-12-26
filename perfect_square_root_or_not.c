#include<stdio.h>
#include<math.h>
int main()
{
	int n,iV;
	float fV;
	scanf("%d",&n);
	fV=sqrt(n);
	iV=fV;
	if(iV==fV)
	printf("True");
	else
	printf("False");
	
}