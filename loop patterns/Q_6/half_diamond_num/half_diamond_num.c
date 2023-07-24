/*

4
55     
666    
7777   
666    
55     
4 

*/

#include <stdio.h>

int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int size = 4;
    int start = 4;
    int count = 0;

    for(counter_y = 1; counter_y <= (size * 2) -1; counter_y++)
    {
        for(counter_x = 1; counter_x <= counter_y; counter_x++)
        {
            if(counter_y <= size)
            {
                printf("%d",(counter_y - 1) + start);
                count = (counter_y - 1) + start;
            }
            
            else
            {
                if(counter_x  <= ((size * 2) - counter_y) )
                {
                    printf("%d",count);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        count--;
        printf("\n");
    }

    return 0;
}