/*

Right Arrow
   *      
    *     
     *    
*******   
     *    
    *     
   *      
Left Arrow
   *
  *
 *
*******
 *
  *
   *

*/

#include <stdio.h>

int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int size = 7;

    printf("Right Arrow\n");
    for(counter_y = 0; counter_y < size; counter_y++)
    {
        for(counter_x = 0; counter_x < size; counter_x++)
        {
            if(counter_y == counter_x - (size/2) || counter_y - (size/2) == (size - 1) - counter_x || counter_y == (size/2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("Left Arrow\n");
    for(counter_y = 0; counter_y < size; counter_y++)
    {
        for(counter_x = 0; counter_x < size; counter_x++)
        {
            if(counter_y == (size/2) - counter_x || counter_y == counter_x + (size/2) || counter_y == (size/2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}

