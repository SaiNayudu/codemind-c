#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int a=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]%2==0 && i%2!=0)
        {
            a=1;
            break;
        }
    }
    if(a==1)
    printf("False");
    else
    printf("True");
}