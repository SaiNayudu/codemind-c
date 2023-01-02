#include<stdio.h>
int main()
{
    long long int  n,i,s=0;
    scanf("%lld",&n);
    long long int  x[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+x[i];
        
    }
    printf("%lld",s);
}