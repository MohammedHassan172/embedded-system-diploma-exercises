#include <stdio.h>

// 6 in y
// 6 in x max

int main()
{
    int counter_x;
    int counter_y;

    for(counter_y = 1; counter_y <= 5; counter_y++)
    {
        for(counter_x = 1; counter_x <= counter_y; counter_x++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}