
#include <stdio.h>

int main(void)
{
    const int n = 5;

    // Printing a grid of bricks:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}