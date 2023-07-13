#include <stdio.h>

int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int size = 5;

    for(counter_y = 1; counter_y <= (size * 2); counter_y++)
    {
        for(counter_x = 1; counter_x <= size; counter_x++)
        {
            if(counter_y <= size)
            {
                if(counter_x <= (size - counter_y) )
                {
                    printf(" ");
                }
                else if(counter_x == size || counter_x == (size - counter_y + 1))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            else
            {
                if(counter_x  < (counter_y - size) )
                {
                    printf(" ");
                }
                else if(counter_x == size || counter_x == (counter_y - size ))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}