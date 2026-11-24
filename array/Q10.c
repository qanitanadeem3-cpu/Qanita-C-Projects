#include <stdio.h>
int main()
{
    int a[10] , i , sum = 0;
    float avg;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter numbers %d = " , i + 1);
        scanf("%d" , &a[i]);
        sum = sum + a[i];
    }
    avg = sum / 10.0;
    printf("The sum is %d and average is %f" , sum , avg);
     return 0;
}
    
