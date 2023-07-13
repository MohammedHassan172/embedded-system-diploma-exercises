#include <stdio.h>

int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int size = 6;
    int count = 0;

    for(counter_y = 1; counter_y <= size; counter_y++)
    {
        for(counter_x = 1; counter_x <= (2 * counter_y) - 1 ; counter_x++)
        {
            if(counter_x <= counter_y)
            {
                printf("%c ", counter_x + 64);
                count = counter_x;
            }
            else
            {
                printf("%c ", (--count) + 64);
            }
        }
        printf("\n");
    }


    return 0;
}