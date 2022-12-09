#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int yr=n/365;
    int W=(n-yr*365)/7;
    printf("%d
%d",yr,W);
}