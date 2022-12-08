#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t;
    scanf("%lf%lf%lf",&p,&r,&t);
    double c=p*pow((1+r/100),t);
    printf("%.2lf",c-p);
}