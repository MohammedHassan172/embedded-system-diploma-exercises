/*

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15       
16 17 18 19 20 21    
22 23 24 25 26 27 28 

*/

#include <stdio.h>

int main()
{
    int counter_x;
    int counter_y;
    int size = 7;
    int count = 1;

    for(counter_y = 1; counter_y <= size; counter_y++)
    {
        for(counter_x = 1; counter_x <= counter_y; counter_x++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }

    return 0;
}