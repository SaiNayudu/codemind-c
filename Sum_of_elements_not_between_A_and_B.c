#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(!(x[i]>=a && x[i]<=b))
        s=s+x[i];
    }
    printf("%d",s);
}