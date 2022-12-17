#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int c=21-(x+y);
    if(c<=10)
    {
        printf("%d",abs(c));
    }
    else
    {
        printf("-1");
    }
    
}