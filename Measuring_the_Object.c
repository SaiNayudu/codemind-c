#include<stdio.h>
int main()
{
    int a,x,y,z;
    scanf("%d%d%d%d",&a,&x,&y,&z);
    if(x+y==a || y+z==a || z+x==a ||x==a || y==a || z==a || x+y+z==a)
    printf("YES");
    else
    printf("NO");
}