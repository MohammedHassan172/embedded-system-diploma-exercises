#include <stdio.h>

int main()
{
    int counter_x = 0;
    int counter_y = 0;

    for(counter_y = 0; counter_y < 3; counter_y++)
    {
        for(counter_x = 0; counter_x < 5; counter_x++)
        {
            printf("*  ");
        }
        printf("\n");
    }

    return 0;
}