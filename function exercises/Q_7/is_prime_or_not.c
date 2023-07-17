#include <stdio.h>

int prime_or_not(int num);

int main()
{
    int x = 0;
    scanf_s("%d",&x);
    if(prime_or_not(x))
    {
        printf("the number is prime.");
    }
    else
    {
        printf("the number is not prime.");
    }

    return 0;
}

int prime_or_not(int num)
{   
    int i = 2;

    while(i <= num/2)
    {
        if(num % i == 0)
        {
            return 0;
        }
        else
        {
            i++;
        }
    }
    

    return 1;
}
