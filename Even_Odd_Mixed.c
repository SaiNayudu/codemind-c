#include<stdio.h>
int main()
{
    int n,cnt=0,ant=0,rem,cntn=0;
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
    cntn++;
        if(rem%2==0)
        cnt++;
        else
        ant++;
        n=n/10;
    }
   if(cnt==cntn)
    printf("Even");
    else if(ant==cntn)
    printf("Odd");
    else
  printf("Mixed");
}