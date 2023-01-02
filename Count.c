#include<stdio.h>
int main()
{
    int n,ecnt=0,ocnt=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]%2==0)
        ecnt++;
        else
        ocnt++;
    }
    printf("%d %d",ecnt,ocnt);
}