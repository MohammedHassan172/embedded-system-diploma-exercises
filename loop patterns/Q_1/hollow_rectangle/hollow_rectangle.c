/*

*  *  *  *  *  
*           *  
*  *  *  *  *

*/

#include <stdio.h>

int main()
{
    int counter_x = 0;
    int counter_y = 0;

    for(counter_y = 0; counter_y < 3; counter_y++)
    {
        for(counter_x = 0; counter_x < 5; counter_x++)
        {
            if((1 == counter_y) && ((counter_x > 0) && (counter_x < 4)))
            {
                printf("   ");
            }
            else
            {
                printf("*  ");
            }
        }
        printf("\n");
    }

    return 0;
}

/*#include <stdio.h>

int main()
{
    int counter_x = 0;
    int counter_y = 0;

    for(counter_y = 0; counter_y < 3; counter_y++)
    {
        for(counter_x = 0; counter_x < 5; counter_x++)
        {
            if((0 == counter_y || 2 == counter_y || 0 == counter_x || 4 == counter_x))
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}
*/