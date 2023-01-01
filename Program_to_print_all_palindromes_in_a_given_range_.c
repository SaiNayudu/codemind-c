#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++)
    {
        int temp=i,r=0,rem;
        while(temp!=0)
        {
            rem=temp%10;
            r=r*10+rem;
            temp=temp/10;
        }
        if(r==i)
        printf("%d ",i);
    }
}