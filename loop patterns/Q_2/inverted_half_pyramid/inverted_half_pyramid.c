#include <stdio.h>

// 6 in y
// 6 in x max

int main()
{
    int counter_x;
    int counter_y;

    for(counter_y = 1; counter_y <= 6; counter_y++)
    {
        for(counter_x = 1; counter_x <= (7 - counter_y); counter_x++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*// C program to print inverted half pyramid pattern using stars
#include <stdio.h>
int main()
{
int i, j, n, k = 0;
scanf(“%d”,&n);

for(i = n; i >= 1; –i)
{
for(j = 1; j <= i; ++j)
{
printf(“* “);
}
printf(“\n”);
}

return 0;
}*/