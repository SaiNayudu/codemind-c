#include<stdio.h>
int main()
{
    int n,c=0,rem,s=0;
    scanf("%d",&n);
    
        while(n!=0)
        {
            rem=n%10;
            //printf("%d",n);
            s=s+rem;
            n=n/10;
            c+=1;
        }
        if(c==1)
        printf("%d",s);
        else
        {
            while(c>1)
            {
                c=0;
                n=s;
                s=0;
                while(n!=0)
                    {
                        rem=n%10;
                        //printf("%d",n);
                        s=s+rem;
                        n=n/10;
                        c+=1;
                    }
                   
            }
            printf("%d",s);
        }
    
}