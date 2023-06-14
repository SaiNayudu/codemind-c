#include<stdio.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int s;
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        if(x[i]==s)
        cnt++;
    }
    printf("%d",cnt);
}