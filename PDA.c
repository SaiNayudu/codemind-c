#include<stdio.h>
int main()
{
    int n,s=0,res;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        s=s+i;
        res=s-n;
    }
    if(res==n)
    printf("PERFECT");
    else if(res<n)
    printf("DEFICIENT");
    else
    printf("ABUNDANT");
}