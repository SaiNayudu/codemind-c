#include<stdio.h>
int main()
{
    int n,c,a=0,b=1,temp;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        c=0;
        else if(i==2||i==3)
        c=1;
        else
        {
            temp=a;
            a=b;
            b=c;
            c=a+b;
        }
        printf("%d ",c);
    }
}