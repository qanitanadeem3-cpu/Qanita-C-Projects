#include <stdio.h>
int main(int argc, char const *argv[])
{
 printf("----Qanita Reportcard----\n");
 int Maths100, Eng60;
 printf("marks in Maths out of 100: ");
 scanf("%d" , &Maths100);
 printf("marks in English out of 60: ");
 scanf("%d" , &Eng60);
 printf("Roll number: 25\n");
 char section = 'B';  
 printf("Section: %c\n", section);
 float percentage = (Maths100 + Eng60) / 160.0f * 100.0f;
 printf("percentage: %.2f\n" , percentage);
 printf("Maths marks: %d\n" , Maths100);
printf("English marks: %d\n" , Eng60);
int totalmarks = Maths100 + Eng60;
printf("Total marks : %d\n" , totalmarks );
printf("Average: %.2f\n" , totalmarks / 2.0f);
    return 0;
}
