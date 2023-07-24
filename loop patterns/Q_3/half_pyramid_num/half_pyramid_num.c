/*

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

*/

#include <stdio.h>


int main()
{
    int counter_x;
    int counter_y;

    for(counter_y = 1; counter_y <= 5; counter_y++)
    {
        for(counter_x = 1; counter_x <= counter_y; counter_x++)
        {
            printf("%d ",counter_x);
        }
        printf("\n");
    }

    return 0;
}