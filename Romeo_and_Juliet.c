#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    x=x*5;
    y=y*10;
    int s=0;
    s=x+y;
    printf("%d",s/z);
}