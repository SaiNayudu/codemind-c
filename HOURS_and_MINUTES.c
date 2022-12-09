#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int h=n/60;
    int min=n%60;
    printf("%d Hour(s) %d Minute(s)",h,min);
}