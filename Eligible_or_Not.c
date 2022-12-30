#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(z>=x && z<y)
        printf("YES
");
        else
        printf("NO
");
    }
}