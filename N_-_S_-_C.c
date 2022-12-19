#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=x+1;i<=y-1;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}