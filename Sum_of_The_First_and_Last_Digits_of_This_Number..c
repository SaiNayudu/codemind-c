#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        int l=x%10;
        while(x>=10)
        {
            x=x/10;
        }
        int fn=x;
        printf("%d
",fn+l);
    }
}