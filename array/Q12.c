#include <stdio.h>
int main()
{  
    int a[15], i , even , odd ;
    for ( i = 0; i < 15; i++)
    {
        printf("Enter integers %d = " , i + 1);
        scanf("%d" , &a[i]);
    }
        even = 0 ;
        odd = 0 ;
        for ( i = 0; i < 15; i++)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            
        }
        printf("Even = %d\n" , even);
        printf("Odd = %d" , odd);
    return 0;
}
    
