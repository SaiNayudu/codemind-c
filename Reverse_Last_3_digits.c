#include<stdio.h>
int main()
{
    int n,rem,r=0;
    scanf("%d",&n);
    int temp=n;
    int t=n%1000;
    int f=t;
    //printf("last 3 = %d
",t);
    while(t!=0)
    {
    	rem=t%10;
    	r=r*10+rem;
    	t=t/10;
	}
	//printf("last rev = %d
",r);
	int sub=temp-f;
	//printf("sub = %d
",sub);
	int add=sub+r;
	printf("%d",add);
	
}