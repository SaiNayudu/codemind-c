#include<stdio.h>
int main()
{
    int n,a=0,b=1,fib=0;
    scanf("%d",&n);
    while(a<=n)
    {
        if(a==n)
        {
            fib=1;
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(fib==1)
    printf("true");
    else
    printf("False");
}