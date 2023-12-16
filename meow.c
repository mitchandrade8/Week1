
#include <stdio.h>

int main(void) 
{
    // would be better to add a loop

    // First Version:
    /*
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
    */

   // Refactored Version with While loop:

   int counter = 3;
   while (counter > 0)
   {
    printf("meow\n");
    counter = counter - 1;
   }

   int i = 3;
   while (i > 0) 
   {
    printf("moew\n");
    i--;
   }

   int i = 1;
   while (i <= 3)
   {
    printf("meow\n");
    i++;
   }

}