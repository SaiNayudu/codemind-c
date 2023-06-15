#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
for(int i=1;i<=a;i++)	
{
    int n,sn,s=0;
    scanf("%d",&n);
    sn=((n*(n+1))/2);
    int x[n];
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        s=s+x[i];
    }
    printf("%d
",sn-s);
}
}