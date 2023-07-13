#include <stdio.h>
int size = 6;

int main()
{
    int counter_y = 0;
    int counter_x = 0;

    for(counter_y = 1; counter_y <= size; counter_y++)
    {
        for(counter_x = 1; counter_x <= size; counter_x++)
        {
            if(counter_x <= (size - counter_y))
            {
                printf(" ");
            }
            else if(counter_y == 1 || counter_x == size - counter_y + 1 ||  counter_x == size || counter_y == size)  
            {
                printf("%d ",counter_x - (size - counter_y));
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