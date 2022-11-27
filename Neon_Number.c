#include<stdio.h>
int main()
{
    int n,s=0,rem=0;
    scanf("%d",&n);
    int p=n*n;
    while(p!=0)
    {
        rem=p%10;
        s=s+rem;
        p=p/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}