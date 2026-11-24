#include <stdio.h>
int main()
{
    int a[3][3] , i ,j , sum = 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter element : ");
            scanf("%d" , &a[i][j]);
            sum = sum + a[i][j];
        } 
    }
    printf("Sum of all element = %d" , sum);
        return 0;
}
