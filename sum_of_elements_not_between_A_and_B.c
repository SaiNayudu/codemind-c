#include<stdio.h>
int main()
{
    int n,a,b,sum=0,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
       if(!(x[i]>=a && x[i]<=b))
        {
            sum=sum+x[i];
        }
    }
    printf("%d",sum);
}