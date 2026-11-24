#include <stdio.h>
int main()
{
    float a[5] , sum = 0 , avg , perc;
    int i ;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d = " , i + 1);
        scanf("%f" , &a[i]);
        sum = sum + a[i];
    }
        avg = sum / 5;
        perc = sum / 500 * 100;
        printf("The average =  %f\n" , avg);
        printf("The percentage is = %f" , perc);
    return 0;
}