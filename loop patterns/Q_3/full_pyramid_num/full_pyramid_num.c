#include <stdio.h>
int size = 4;

int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int count = 0;

    for(counter_y = 1; counter_y <= size; counter_y++)
    {
        count = counter_y;
        for(counter_x = 1; counter_x <= size * 2 - 1; counter_x++)
        {
            if(counter_x <= (size - counter_y))
            {
                printf("  ");
            }
            else if(counter_x - (size - counter_y) <=  counter_y * 2 - 1)
            {
                if(counter_x == size)
                {
                    printf("%d ",(counter_y * 2 - 1));
                    count = (counter_y * 2 - 2);
                }
                else if(counter_x < size)
                {
                    printf("%d ", count);
                    count++;
                }
                else
                {
                    printf("%d ", count);
                    count--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}



/* C program – Full Pyramid Pattern Printing using numbers */
/*
#include <stdio.h>
int main()
{
int i, j, n, count = 0, count1 = 0, k = 0;
scanf("%d",&n);
for(i = 1; i <= n; ++i)
{
for(j = 1; j <= n-i; ++j)
{
printf(" ");
++count;
}

while(k != 2*i-1)
{
if (count <= n-1)
{
printf("%d ", i+k);
++count;
}
else
{
++count1;
printf("%d ", (i+k-2*count1));
}
++k;
}
count1 = count = k = 0;

printf("\n");
}
return 0;
}*/