/*

********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****

*/

#include <stdio.h>

int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int size = 5;

    for(counter_y = 1; counter_y <= size; counter_y++)
    {
        for(counter_x = 1; counter_x <= (17 - counter_y)  ; counter_x++)
        {
            if(counter_x  > 9 - counter_y  && (counter_x - (9 - counter_y)  <= counter_y))
            {
                printf("%d*",counter_y);
            }
            else
            {
                printf("*");
            }
        
        }
        printf("\n");
    }


    return 0;
}

/*#include<stdio.h>
int main()
{
int n, i, j, space, count = 1, num = 0, star = 8;
scanf("%d", &n);
space = n;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= star; j++)
if(i + j <= star + 1)
printf("*");
num++;
for (j = 1; j <= i; j++)
{
printf("%d", num);
if (i > 1 && count < i)
{
printf("*");
count++;
}
}
for (j = 1; j <= star; j++)
if(i + n <= j + n)
printf("*");
printf("\n");
space--;
count = 1;
}
return 0;
}*/