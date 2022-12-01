#include<stdio.h>
int main()
{
    int n,s=0,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        s+=i;
        i++;
    }
    printf("%d",s);
}