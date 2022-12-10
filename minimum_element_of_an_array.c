#include<stdio.h>
int main()
{
    int n,min,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    min=x[0];
    {
    for(i=0;i<n;i++)
    {
        if(min>x[i])
        min=x[i];
    }
    }
    printf("%d",min);
}