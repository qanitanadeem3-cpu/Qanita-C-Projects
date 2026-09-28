#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num = 100 + 200;
    printf("%d\n" , num);
    printf("My number is %d\n",  num);
    printf("a + b = %d\n" ,num );
   int half = num /2;
    printf("a / b = %d\n" , half);
    int a, b;
    a = 200;
    b = 400;
    printf("a + b = %d\n" , a + b);
    printf("a * b = %d\n" , a * b);
    printf("Enter number a");
    scanf("%d" , &a);
    printf("Enter number b");
    scanf("%d" , &b);
    printf("the multiplication is %d\n" , a * b);
    printf("the division is %d\n" , a / b);
    float decimal = 0.15;
    printf("the decimal is %f\n" , decimal);
    char initial = 'Q';
    printf("the initial is %c\n" , initial);
    double doubledecimal = 3.1473147314731473147;
    printf("the greater decimal is %9.9lf\n" , doubledecimal);
    return 0;
}
