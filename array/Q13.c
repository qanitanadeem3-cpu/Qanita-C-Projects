#include <stdio.h>
int main()
{ 
   int a[10] , i , search , found;
   for ( i = 0; i < 10; i++)
   {
    printf("Enter Number %d = " , i + 1);
    scanf("%d" , &a[i]);
   }
   printf("Enter number to search ");
   scanf("%d" , &search);
    found = 0;
   for( i = 0; i < 10; i++)
   {
        if (a[i] == search)
        {
            printf("Found at index %d" , i);
            found = 1;
        }
   }
   if (found == 0)
   {
    printf("Not found");
    found = 0;
   }
    return 0;
}
    
