#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int cap=2*s*t*b*512;
    printf("%dkb",cap/1024);
}