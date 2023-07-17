#include <stdio.h>

int some_of_series(int num);

int main()
{
    printf("%d",some_of_series(5)); 
    

    return 0;
}

int some_of_series(int num)
{
    int sum = 0;
    int counter = 0;
    int counter_2 = 0;

    for(counter_2 = 1; counter_2 <= num; counter_2++)
    {
        int fact = 1;
        for(counter = 1; counter <= counter_2; counter++)
        {
            fact = fact * counter;
           
        }
        sum = sum + fact/counter_2;
        
    }

   return sum;
}
