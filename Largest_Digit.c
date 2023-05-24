#include<stdio.h>
int main()
{
    int number,reminder,large=0;
    //printf("Enter Number: ");
    scanf("%d",&number);
    while(number>0)
    {
        reminder=number%10;
        if(large<reminder)
        {
            large=reminder;
        }
        number=number/10;
    }
    printf("%d",large);
}
