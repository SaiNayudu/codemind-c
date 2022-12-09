#include<stdio.h>
int main()
{
    int x,y,cnt=0;
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++)
    {
        if(i%3==0)
        cnt++;
    }
    printf("%d",cnt);
}