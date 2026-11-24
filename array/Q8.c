 #include <stdio.h>
int main()
{ 
    int a[2] , temp;
    printf("Enter the two numbers = ");
    scanf("%d %d" , &a[0] , &a[1]);
    temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    printf("After swaping : %d %d\n" , a[0] , a[1]);
 return 0;
}
    
