#include<stdio.h>
int main()
{
    int n,b,cnt=0;
    scanf("%d%d",&n,&b);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]%b==0)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}