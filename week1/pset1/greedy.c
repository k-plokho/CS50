#include <stdio.h>
#include <math.h>
#include "cs50.h"

int main(void)
{
     float change;
     int coin = 0, converted;

     //user's input
     do
     {
         printf("How much change do you have?\n");
         change = GetFloat();
     }
     while (change < 0);
     
    //convertation into cents
     change *= 100.0;
     converted = (int) round(change);
     
     //quarters loop
     while (converted >= 25)
     {
         coin++;
         converted -= 25;
     }
     
     //dimes loop
     while (converted >= 10)
     {
         coin++;
         converted -= 10;
     } 
     
     //nickels loop
     while (converted >= 5)
     {
         coin++;
         converted -= 5;
     }
     
     //pennies loop
     while (converted >= 1)
     {
         coin++;
         converted -= 1;
     } 
     
     //output
     if (coin == 1)
     {
     printf("You've got 1 coin\n");
     }
     else
     printf("You've got %i coins\n", coin);
}
