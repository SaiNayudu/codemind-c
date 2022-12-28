#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int s=0;
    for(i=0;i<n;i++)
    
    {
        if(x[i]%2==0)
        {
            break;
        }
        else
        {
            s=s+x[i];
        }
    }
    printf("%d",s);
}