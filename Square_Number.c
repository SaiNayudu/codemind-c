#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,i,j,f=0;
    scanf("%d",&n);
    int temp=n;
    for(i=0;i<=sqrt(n);i++)
    {
        for(j=0;j<=sqrt(n);j++)
        {
            if(i!=j)
            {
            s=i*i+j*j;
            if(temp==s)
            {
                f=1;
                break;
            }
            }
        }
    }
    if(f==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}