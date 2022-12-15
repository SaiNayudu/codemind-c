#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}