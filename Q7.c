#include <stdio.h>
int main()
{ 
    int a[3] , sum = 0 , i;
    float avg ;
    for ( i = 0; i < 3; i++)
    {
        printf("Enter the marks %d = " , i + 1);
        scanf("%d" , &a[i]);
        sum = sum + a[i];
        avg = sum / 3.0;
    }
        if (avg>=90)
        {
            printf("A Grade");
        }
        else if(avg>=80)
        printf("B Grade\n");
        else if(avg>=70)
        printf("C Grade\n");
        else if(avg>=60)
        printf("D Grade\n");
        else
        printf("Fail");        
    
    return 0;
}
    