/*

       1 
      1 1 
     1 2 1 
    1 3 3 1 
   1 4 6 4 1 
  1 5 10 10 5 1 
 1 6 15 20 15 6 1 
 
 */

#include <stdio.h>

int main()
{
    int counter_x;
    int counter_y;
    int size = 7;
    int coff = 1;

    for(counter_y = 0; counter_y < size; counter_y++)
    {
        for(counter_x = 0; counter_x <= size; counter_x++)
        {

            if(counter_x <= (size - counter_y - 1))
            {
                printf(" ");
            }
            else
            {
                if(counter_x - (size - counter_y - 1) == 1 || counter_y == 0)
                {  
                    coff = 1;
                }
                else
                {
                    coff = coff*((counter_y - 1) - ( (counter_x - (size - counter_y)) - 1) + 1)/(counter_x - (size - counter_y));
                }
                printf("%d ",coff);
            }
            
           
        }
        printf("\n");
    }

    return 0;
}