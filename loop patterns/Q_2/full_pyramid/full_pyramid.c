/*

     *      
    * *     
   * * *    
  * * * *   
 * * * * *  
* * * * * * 

*/

#include <stdio.h>
int size = 6; 

int main()
{
    int counter_y;
    int counter_x;

    for(counter_y = 1; counter_y <= size; counter_y++)
    {
        for(counter_x = 1; counter_x <= size; counter_x++)
        {
            if(counter_x <= (size - counter_y))
            {
                printf(" ");
            }
            else if(counter_x - (size - counter_y) <= counter_y)
            {
                printf("* ");
            }

        }
        printf("\n");
    }


    return 0;
}


/*// C program to print full pyramid pattern using stars
#include <stdio.h>
int main()
{
int i, j, n = 6, k = 0;
//scanf("%d",&n);

for(i = 1; i <= n; ++i, k = 0)
{
for(j = 1; j <= n - i; ++j)
{
printf(" ");
}

while(k != 2 * i-1)
{
printf("* ");
++k;
}

printf("\n");
}

return 0;
}*/