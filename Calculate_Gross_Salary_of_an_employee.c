#include<stdio.h>
int main()
{
    float bs,hra,da,gs,pf;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=bs*0.12;
    gs=bs+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f",gs);
}