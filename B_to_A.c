#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=y;i>=x;i--)
    {
        printf("%d ",i);
    }
}