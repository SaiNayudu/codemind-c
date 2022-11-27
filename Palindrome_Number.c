#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x,r=0,rem;
        scanf("%d",&x);
        int tp=x;
        while(x!=0)
        {
            rem=x%10;
            r=r*10+rem;
            x=x/10;
        }
        if(tp==r)
        printf("True
");
        else
        printf("False
");
    }
}