#include <stdio.h>

int decimal_to_binary(int num);

int main()
{
    printf("%d", decimal_to_binary(65));
    

    return 0;
}

int decimal_to_binary(int num)
{   
    int bin = 0;
    int mul = 1;
    while(num != 0)
    {
       bin = bin + (num % 2) * mul;
       mul = mul * 10;
       num = num/2;
    }

    return bin;
}
