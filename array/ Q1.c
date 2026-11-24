#include <stdio.h>
int main()
{
    int  a[2] , i , sum = 0;
     printf("Enter integers = ");
    for ( i = 0; i < 2; i++)
    {
        scanf("%d" ,&a[i]);
        sum = sum + a[i];
    }
        printf("The sum is = %d" , sum);
    return 0;
}
