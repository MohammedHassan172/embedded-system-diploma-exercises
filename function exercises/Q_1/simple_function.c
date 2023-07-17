#include <stdio.h>

unsigned int sum(unsigned int num1, unsigned int num2);

int main()
{   
    printf("sum is = %i \n \n", sum(2,5));

    return 0;
}

unsigned int sum(unsigned int num1, unsigned int num2)
{
    unsigned int sum = 0;

    sum = num1 + num2;
    return sum;
}