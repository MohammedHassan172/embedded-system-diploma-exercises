#include <stdio.h>

void swap(int *x,int *y);

int main()
{
    int x = 0,y = 0;
    printf("enter the nubers to be swapped: ");
    scanf_s("%d  %d", &x, &y);
    swap(&x,&y);
    printf("the res: %d  %d", x, y);

    return 0;
}

void swap(int *x,int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
