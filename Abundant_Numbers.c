#include<stdio.h>
int main()
// ABUNDANT NUMBER
{
    int n,i,sum=0;
    //printf("Enter the value of n :
");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

