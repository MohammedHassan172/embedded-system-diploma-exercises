#include <stdio.h>
int main()
{
    int counter_x;
    int counter_y;
    for(counter_y = 1; counter_y <= 5; counter_y++)
    {
        for(counter_x = 1; counter_x <= (6 - counter_y); counter_x++)
        {
            if(1 == counter_y || 1 == counter_x || counter_x == 6 - counter_y)
            {
                printf("%d  ", counter_y + counter_x - 1);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}

/* C program print hollow inverted half pyramid pattern using numbers */

/*
#include <stdio.h>
int main()
{
int i, j, n, k = 0;
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
for(j = i; j <= n; j++)
{
if (i == 1 || j == i || j == n)
printf("%d", j);
else
printf(" ");
}
printf("\n");
}
return 0;
}*/