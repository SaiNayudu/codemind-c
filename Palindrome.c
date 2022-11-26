#include<stdio.h>
int main()
{
    int n,r=0,rem;
    scanf("%d",&n);
    int tp=n;
    while(n!=0)
    {
        rem=n%10;
        r=r*10+rem;
        n=n/10;
    }
    if(r==tp)
    {
        printf("Palindrome");
        
    }
    else
    {
        printf("Not Palindrome");
    }
}