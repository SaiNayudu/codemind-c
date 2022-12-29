#include<stdio.h>
void sd(int , int ,float ,float );
int main()
{
    int a,b;
    float x,y;
    scanf("%d%d%f%f",&a,&b,&x,&y);
    sd(a,b,x,y);
}
void sd(int a,int b,float x,float y)
{
    printf("%d %d
",a+b,a-b);
    printf("%.1f %.1f",x+y,x-y);
}