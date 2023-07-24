/*

*
* 1 * 
* 1 2 1 * 
* 1 2 3 2 1 * 
* 1 2 1 * 
* 1 * 
*

*/

#include <stdio.h>

int main()
{
    int counter_x = 0;
    int counter_y = 0;
    int size = 5;
    printf("*\n");
    for(counter_y = 1; counter_y <= size -2; counter_y++)
    {
        for(counter_x = 1; counter_x <= ((2 * counter_y) + 1); counter_x++)
        {
            if(counter_x == 1 || counter_x == ((2 * counter_y) + 1))
            {
                printf("* ");
            }
            else
            {
                if(counter_x <= (counter_y + 1))
                {
                    printf("%d ",counter_x - 1);
                }
                else
                {
                    printf("%d ",(2 * counter_y + 1) - counter_x);
                }
            }
        }
        printf("\n");
    }

    for(counter_y = (size - 3); counter_y >= 1; counter_y--)
    {
        for(counter_x = 1; counter_x <= ((2 * counter_y) + 1); counter_x++)
        {
            if(counter_x == 1 || counter_x == ((2 * counter_y) + 1))
            {
                printf("* ");
            }
            else
            {
                if(counter_x <= (counter_y + 1))
                {
                    printf("%d ",counter_x - 1);
                }
                else
                {
                    printf("%d ",(2 * counter_y + 1) - counter_x);
                }
            }
        }
        printf("\n");
    }
    printf("*");
}

/*#include <stdio.h>

int main()
{
    int counter_x = 0;
    int counter_y = 0;
    int size = 5;

    for(counter_y = 1; counter_y <= size + 2; counter_y++)
    {
        for(counter_x = 1; counter_x <= (2 * counter_y) - 1; counter_x++)
        {

            if(counter_y <= (size -1))
            {
                if(counter_y == 1 || counter_x == 1 || counter_x == (2 * counter_y) - 1)
                {
                    printf("*");
                }
                else
                {
                    if(counter_x <= counter_y)
                    {
                        printf("%d",counter_x - 1);
                    }
                    else
                    {
                        printf("%d",((2 * counter_y) - 1) - counter_x);
                    }
                }
            }
            else
            {
                if(counter_x == 1 || counter_x == ((size * 2) - counter_y))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                    if(counter_x <= counter_y)
                    {
                        printf("%d",counter_x - 1);
                    }
                    else
                    {
                        printf("%d",((2 * counter_y) - 1) - counter_x);
                    }
                }
            }
            
        }
        printf("\n");
    }

    return 0;
}*/