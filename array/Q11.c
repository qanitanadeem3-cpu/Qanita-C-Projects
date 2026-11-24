#include <stdio.h>
int main()
{  
    int i , a[10] , large , small;
    for (i = 0; i < 10; i++)
    {
        printf("Enter integer %d =  " , i + 1);
        scanf("%d" , &a[i]);
    }
        large = a[0];
        small = a[0];
    for ( i = 1; i < 10; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
        if (a[i] < small)
        {
            small = a[i];
        }
        
    }
    printf("largest = %d\n" , large);
    printf("Smallest = %d" , small);    
    return 0;
}
    
