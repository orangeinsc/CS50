#include <cs50.h>
#include <stdio.h>

int main(void)
{
   printf("please input a positive number.\n");
   int minutes = get_int();
   
   if (minutes > 0)
   {
       int bottles = minutes * 12;
       printf("Minutes: %d\n", minutes);
       printf("Bottles: %d\n", bottles);
       
   }
   else
   {
       printf("Number must be a integer\n");
       
   }
}
