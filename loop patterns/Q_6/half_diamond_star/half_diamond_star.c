#include <stdio.h>

int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int size = 4;
    int count = 0;

    for(counter_y = 1; counter_y <= (size * 2); counter_y++)
    {
        for(counter_x = 1; counter_x <= counter_y; counter_x++)
        {
            if(counter_y <= size)
            {
                if(counter_x == counter_y)
                {
                    printf("%d",counter_y);
                }
                else
                {
                    printf("%d*",counter_y);
                }
                count = counter_y + 1;
            }
            
            else
            {
                if(counter_x  <= ((size * 2) - (counter_y - 1)) )
                {
                    if(counter_x == ((size * 2) - (counter_y - 1)))
                    {
                        printf("%d",count);
                    }
                    else
                    {
                        printf("%d*",count);
                    }
                   
                }
                else
                {
                    break;
                }
            }
        }
        count--;
        printf("\n");
    }

    return 0;
}