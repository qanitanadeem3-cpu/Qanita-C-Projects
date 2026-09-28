#include <stdio.h>
int main(int argc, char const *argv[])
{
   printf("======shopping Bill======\n");
   printf("costumer age: 20\n");
   printf("Quantity: 5\n");
   float price = 1000.50f;
   printf("price: %.2f\n" , price);
   printf("Total bill: %.2f\n" , price * 5);
   printf("Average price: %.2f\n" , (price * 5) / 5);
   printf("Discount (50%%): %.2f\n" , price * 5 * 0.5);
   char customername = 'M';
   printf("customer name: %c\n" , customername);
   printf("THANKS FOR SHOPPING\n");
    return 0;
}
