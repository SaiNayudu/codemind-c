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
    for(int i=0;i<n-1;i++)
    {
        if(x[i]<x[i+1])
        cnt++;
    }
    (cnt==n-1)?printf("yes"):printf("no");
}