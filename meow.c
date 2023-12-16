
#include <stdio.h>

int main(void) 
{
    // would be better to add a for loop

    // First Version:
    /*
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
    */

   // Refactored Version with For loop:

   int counter = 3;
   while (counter > 0)
   {
    printf("meow\n");
    counter = counter - 1;
   }
   
}