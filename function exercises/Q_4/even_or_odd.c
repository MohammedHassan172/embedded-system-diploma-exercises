#include <stdio.h>

int even_or_odd(int num);

int main()
{
    int num = 0;
    printf("enter number: ");
    scanf_s("%d",&num);

    if(even_or_odd(num))
    {
        printf("number is odd");
    }
    else
    {
        printf("number is even");
    }
    

    return 0;
}

int even_or_odd(int num)
{
   return (num % 2);
}
