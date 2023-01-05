#include<stdio.h>
int main()
{
    int a,b,c=1,n;
    scanf("%d",&n);
    a=n;
    b=n*n;
    while(n!=0)
    {
        c=c*10;
        n=n/10;
    }
    if(b%c==a)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}