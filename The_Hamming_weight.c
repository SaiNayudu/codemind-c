#include<stdio.h>
int main()
{
    char str[10000];
    int i=0,cnt=0;
    scanf("%s",str);
    while(str[i]!=NULL)
    {
        if(str[i]=='1')
        {
            cnt++;
        }
        i++;
    }
    printf("%d",cnt);
}