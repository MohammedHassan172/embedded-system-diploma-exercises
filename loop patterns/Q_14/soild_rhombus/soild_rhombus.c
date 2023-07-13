#include <stdio.h>

int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int size = 4;

    printf("Right Arrow\n");
    for(counter_y = 1; counter_y <= size; counter_y++)
    {
        for(counter_x = 1; counter_x <= (size - counter_y); counter_x++)
        {
            printf(" ");
        }
        for (counter_x = 1; counter_x <= size; counter_x++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}

