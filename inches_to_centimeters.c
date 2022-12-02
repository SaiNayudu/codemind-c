#include<stdio.h>
float itc(int);
int main()
{
    int n;
    scanf("%d",&n);
    float res=itc(n);
    printf("%.2f",res);
}
float itc(int x)
{
    float z;
    z=2.54*x;
    return z;
}