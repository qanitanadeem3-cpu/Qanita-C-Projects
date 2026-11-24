#include <stdio.h>
int main()
{ 
    int a[10] , i;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter integers %d = " , i + 1);
        scanf("%d" , &a[i]);
    }
    for ( i = 9; i >= 0; i--)
    {
        printf("%d\n" , a[i]);   
    }
    return 0;
}
    