/*

*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *

*/

#include <stdio.h>

int main()
{
    int counter_x = 0;
    int counter_y = 0;
    int size = 5;

    for(counter_y = 0; counter_y < size; counter_y++)
    {
        for(counter_x = 0; counter_x < size * 2; counter_x++)
        {
            if(counter_y >= counter_x)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

            if(counter_y >= (2 * size - 1) - counter_x)
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

    for(counter_y = 0; counter_y < size; counter_y++)
    {
        for(counter_x = 0; counter_x < size * 2; counter_x++)
        {
            if(counter_y <= (size - 1) - counter_x)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

            if(counter_y <= counter_x - (size))
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