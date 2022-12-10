#include<stdio.h>
int main()
{
    int n,max,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    max=x[0];
    {
    for(i=0;i<n;i++)
    {
        if(max<x[i])
        max=x[i];
    }
    }
    printf("%d",max);
}