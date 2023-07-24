/*

* * * * * * 
*       *   
*     *     
*   *       
* *         
* 

*/

#include <stdio.h>


int main()
{
    int counter_x;
    int counter_y;

    for(counter_y = 1; counter_y <= 6; counter_y++)
    {
        for(counter_x = 1; counter_x <= (7 - counter_y); counter_x++)
        {
            if((1 == counter_y) || (1 == counter_x) || ((7 - counter_y) == counter_x))
            {
                printf("* ");
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

/*
#include <stdio.h>
int main()
{
int i, j, k = 0;
for (i = 0; i < 6; i++)
{
printf("* ");
}
for(i=6; i>=1; --i)
{
for(j=0; j < 6-i; ++j)
while (k != (2 * i - 1)) {
if (k == 0 || k == 2 * i - 2)
printf("*");
else
printf(" ");
k++;

}
k = 0;
printf("\n"); // print next row
}

}*/
