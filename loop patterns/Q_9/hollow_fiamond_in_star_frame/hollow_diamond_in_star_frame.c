/*

* * * * *  * * * * * 
* * * *      * * * * 
* * *          * * * 
* *              * * 
*                  * 
*                  * 
* *              * * 
* * *          * * * 
* * * *      * * * *
* * * * *  * * * * *

*/

#include <stdio.h>

int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int size = 5;

    for(counter_y = 1; counter_y <= (size * 2); counter_y++)
    {
        for(counter_x = 1; counter_x <= (size * 2) + 1 ; counter_x++)
        {
            if(counter_y <= size)
            {
                if( counter_x <= (size - (counter_y - 1) ))
                {
                    if(counter_x == (size - (counter_y - 1) ))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("* ");
                    }
                }
                else if(counter_x - (size - (counter_y - 1) ) <= ((counter_y * 2) - 1))
                {
                    printf("  ");
                }
                else
                {
                printf("* ");
                }

            }
            else
            {
                if(counter_x <= (counter_y - size))
                {
                    if(counter_x == (counter_y - size))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("* ");
                    }
                }
                else if(counter_x - (counter_y - size) <= ( ( ( ( (size * 2) - counter_y) + 1) * 2) - 1))
                {
                    printf("  ");
                }
                else
                {
                printf("* ");
                }


            }
           
        }
        printf("\n");
    }

    return 0;
}
/*

* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
*/
/*
#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    // upper half of the pattern
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < (2 * n); j++)
        { 
            if(i + j <= n - 1)  // upper left triangle
                printf("*");
            else
                printf(" ");
            if((i + n) <= j)  // upper right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    // bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  //bottom left triangle
                printf("*");
            else
                printf(" ");
            if(i >= (2 * n - 1) - j)  // bottom right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/