#include <stdio.h>
int main()
{
    int a[3][3] , i , j , sum = 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter the element = ");
             scanf("%d" , &a[i][j]);
        }
    }
        for ( i = 0; i < 3; i++)
        {
            sum = 0;
            for ( j = 0; j < 3; j++)
            {
                sum = sum + a[i][j];
            }
              printf("Sum of row %d = %d\n" , i + 1, sum);
        }
        for ( j = 0; j < 3; j++)
        {
            sum = 0;
            for ( i = 0; i < 3; i++)
            {
                sum = sum + a[i][j];
            }
            printf("Sum of coloumn %d = %d\n" , j + 1 , sum);
        }
     return 0;
}
 