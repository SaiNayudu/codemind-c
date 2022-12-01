#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    y=y*1;
    z=z*2;
    int s=y+z;
    if(x<=s)
    printf("Qualify");
    else
    printf("Not Qualify");
    
}