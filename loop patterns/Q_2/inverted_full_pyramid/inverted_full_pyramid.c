/*

* * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 

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
            if(counter_x <= (counter_y - 1))
            {
                printf(" ");
            }
            else if(counter_x - (counter_y - 1) <= (size - counter_y + 1))
            {
                printf("* ");
            }

        }
        printf("\n");
    }


    return 0;
}

/*// C program to print inverted full pyramid pattern using stars
#include <stdio.h>
int main()
{
int i, j, n, k = 0;
scanf("%d",&n);

for(i=n; i>=1; --i)
{
for(j=0; j < n-i; ++j)
printf(" ");

for(j=i; j <= 2*i-1; ++j)
printf("* ");

for(j=0; j < i-1; ++j)
printf("* ");

printf("\n");
}

return 0;
}*/