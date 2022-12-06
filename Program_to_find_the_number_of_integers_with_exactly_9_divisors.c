#include<stdio.h>
int main()
{
    int m,i,j,c=0;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        int tc=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                tc++;
            }
        }
        if(tc==9)
        {
        c++;
        printf("%d ",i);
        }
    }
    printf("
");
    printf("Total=%d",c);
}