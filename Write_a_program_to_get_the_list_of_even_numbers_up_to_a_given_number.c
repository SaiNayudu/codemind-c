#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}