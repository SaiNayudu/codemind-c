#include<stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+x[i];
        }
    }
    printf("%d",s);
}
