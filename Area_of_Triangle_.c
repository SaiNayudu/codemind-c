#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z;
    scanf("%f%f%f",&x,&y,&z);
    float s=(x+y+z)/2;
    float ar;
    ar=sqrt(s*(s-x)*(s-y)*(s-z));
    printf("%.2f",ar);
}