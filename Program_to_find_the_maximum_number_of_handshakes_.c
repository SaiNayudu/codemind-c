#include<stdio.h>
int main()
{
    int n,i,op=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        op+=i;
    }
    printf("%d",op);
}