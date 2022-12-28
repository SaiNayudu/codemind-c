#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>y)
        printf("LOSS
");
        else if(x==y)
        printf("NEUTRAL
");
        else
        printf("PROFIT
");
    }
}