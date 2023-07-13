#include <stdio.h>

int main()
{
    int counter_y = 0;
    int counter_x = 0;
    int size = 5;

    for(counter_y = 1; counter_y <= (size * 2) -1; counter_y++)
    {
        for(counter_x = 1; counter_x <= counter_y; counter_x++)
        {
            if(counter_y <= size)
            {
                printf("* ");
            }
            
            else
            {
                if(counter_x  <= ((size * 2) - counter_y) )
                {
                    printf("* ");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}

/*#include <stdio.h>

int main()
{
	int i, j, space, k = 0, n;
	printf("\nEnter the number of rows : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=n-1;i>0;i--)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
			{
				printf("*");
			}
		printf("\n");
	}
}*/