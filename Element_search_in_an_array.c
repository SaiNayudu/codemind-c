#include<stdio.h>
int main()
{
    int n,s,cnt=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        if(x[i]==s)
        cnt++;
    }
    if(cnt>=1)
    printf("True");
    else
    printf("False");
}