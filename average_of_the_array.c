#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    printf("%.2f",sum/n);
}