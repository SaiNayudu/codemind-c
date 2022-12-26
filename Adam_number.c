#include<stdio.h>
int main()
{
    int n,r=0,rem;
    scanf("%d",&n);
    int sq=n*n;
    while(n!=0)
    {
        rem=n%10;
        r=r*10+rem;
        n=n/10;
    }
    int x=r*r;
    int y=0;
    while(x!=0)
    {
        int r=x%10;
        y=y*10+r;
        x=x/10;
    }
    if(y==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}