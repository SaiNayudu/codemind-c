#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int n=y*z;
    int r=x/n;
    if(x%n!=0)
    {
        r+=1;
    }
    printf("%d",r);
}