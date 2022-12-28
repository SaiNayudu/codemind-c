#include<stdio.h>
int main()
{
    int units;
    float bill,ta,tb;
    scanf("%d",&units);
    if(units<=199)
    {
        bill=units*1.20;
        printf("%.2f",bill+100);
    }
    else if(units>=200 && units <400)
    {
        bill = units*1.50;
        printf("%.2f",bill+100);
    }
    else if(units>=400 && units<600)
    {
        bill = units*1.80;
        ta=bill*0.15;
        tb=bill+ta;
        printf("%.2f",tb);
    }
    else 
    {
         bill = units*2.00;
        ta=bill*0.15;
        tb=bill+ta;
        printf("%.2f",tb);
        
    }
}