#include<stdio.h>
 
int main()
{
    int i, j, rows, columns, a[10][10], Sum;
    
   /// printf("Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &i, &j);
    
   // printf("Please Enter the Matrix Row and Column Elements 
");
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }
    
    for(rows = 0; rows < i; rows++)
    {
       Sum = 0;
        for(columns = 0; columns < j; columns++)
        {
            Sum = Sum + a[rows][columns];
        }
        printf("%d ", Sum );
    }
}