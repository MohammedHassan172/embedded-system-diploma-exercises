/*

1 
1 2 
1   3 
1     4 
1 2 3 4 5 

*/

#include <stdio.h>



int main()
{
    int counter_x;
    int counter_y;
    int size = 5;

    for(counter_y = 1; counter_y <= size; counter_y++)
    {
        for(counter_x = 1; counter_x <= counter_y; counter_x++)
        {
            if((size == counter_y) || (1 == counter_x) || (counter_x == counter_y))
            {
                printf("%d ",counter_x);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}