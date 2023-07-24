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
        for(counter_x = 1; counter_x <= (2 * counter_y) - 1 ; counter_x++)
        {
            if(counter_x <= counter_y)
            {
                printf("%d ", counter_x);
                count = counter_x;
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

/* C program for Palindrome pyramid pattern printing using numbers */
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,k,l,n;
printf(“Enter the number of rows : “);
scanf(“%d”,&n);
for(i = 1; i <= n; i++)
{
for(k = 1; k <= i; k++)
{
printf(“%d “,k);
}
for(l = i-1; l >= 1; l–)
{
printf(“%d “,l);
}
printf(“\n”);
}
return 0;
}*/