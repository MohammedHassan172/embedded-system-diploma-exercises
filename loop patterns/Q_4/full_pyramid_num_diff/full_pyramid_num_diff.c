/*

          1 
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
1 2 3 4 5 6 5 4 3 2 1

*/

#include <stdio.h>

int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int size = 6;
    int count = 0;

    for(counter_y = 1; counter_y <= size; counter_y++)
    {
        for(counter_x = 1; counter_x <= (size + counter_y -1) ; counter_x++)
        {
            if(counter_x <= (size - counter_y) )
            {
                printf("  ");
            }
            else if(counter_x - (size - counter_y) <= (2 * counter_y) - 1 && counter_x <= size)
            {
                printf("%d ", counter_x - (size - counter_y) );
                count = counter_x - (size - counter_y);
            }
            else
            {
                printf("%d ", --count);
            }
        }
        printf("\n");
    }


    return 0;
}


/*#include <stdio.h>
int main()
{
int i, j, k, space, n;
scanf("%d", &n);
printf(" ");
for (i=1; i<=n; i++)
{

for (j=1; j<=n-i; j++)
printf(" ");

for(j=1,k=2*i-1; j<=2*i-1; j++,k--)
{
if (j <= k)
printf("%d", j);
else
printf("%d", k);
}
printf("\n");

printf(" ");

}
return 0;
}
*/