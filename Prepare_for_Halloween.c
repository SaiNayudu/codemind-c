#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        x=2*x;
        y=5*y;
        if(x>y)
        printf("Chocolate
");
        else if(x==y)
        printf("Either
");
        else
        printf("Candy
");
    }
}