/*

*******
**   **
* * * *
*  *  *
* * * *
**   **
*******

*/

#include <stdio.h>


int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int size = 7;

    for(counter_y = 0; counter_y < size; counter_y++)
    {
        for(counter_x = 0; counter_x < size; counter_x++)
        {
            if(counter_y == counter_x || counter_y == 0 || counter_y == (size - 1) || counter_x == 0 || counter_x == (size - 1) || counter_y == (size - 1) - counter_x)
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