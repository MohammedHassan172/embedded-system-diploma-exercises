#include <stdio.h>

float square(unsigned int num);

int main()
{   
    unsigned int num = 0;
    printf("input the number: ");
    scanf_s("%i",&num);
    square(num);
    printf("the square is : %0.2f", square(num));



    return 0;
}

float square(unsigned int num)
{
    return (num * num);
}