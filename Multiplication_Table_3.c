#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    for(int i=y;i<=z;i++)
    {
        printf("%d x %d = %d
",x,i,x*i);
    }
}
