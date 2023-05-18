#include<stdio.h>
int main()
{
    int n,s=0,rem;
    scanf("%d",&n);
    int sq=n*n;
    int temp=sq;
    while(temp!=0)
    {
        rem=temp%10;
        s=s+rem;
        temp=temp/10;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}