/*

     * 
    * * 
   *   * 
  *     * 
 *       * 
* * * * * * 

*/

#include <stdio.h>

int main()
{
    int counter_y;
    int counter_x;
    int size = 6; 

    for(counter_y = 1; counter_y <= size; counter_y++)
    {
        for(counter_x = 1; counter_x <= size; counter_x++)
        {
            if(counter_x <= (size - counter_y))
            {
                printf(" ");
            }
            else if(counter_x == (size - counter_y + 1) || counter_x == size || counter_y == size)
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


/*#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i, j, k = 0;
for (i = 1; i <= n; i++)
{
for (j = i; j < n; j++) {
printf(" ");
}
while (k != (2 * i - 1)) {
if (k == 0 || k == 2 * i - 2)
printf("*");
else
printf(" ");
k++;
;
}
k = 0;
printf("\n"); // print next row
}
for (i = 0; i < 2 * n - 1; i++) {
printf("*");
}
}*/