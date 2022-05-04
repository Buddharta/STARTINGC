#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void count(int *array, int max)
{
    for (int i = 0; i < max; ++i)
    {
        array[i] = i+1;
    }
}

int main()
{
    int limit;
    printf("Please introduce a positive integer: \n");
    scanf("%d",&limit);
    if(limit < 1)
    {
        printf("Error, please introduce a positive number\n");
        return 1;
    }
    
    int counter = 0;
    int max_primes = ceil(limit/log(limit) + (2*limit)/(log(limit) * log(limit)));  
    printf("%d\n",max_primes);
    
    int numbers[limit];
    int primes[max_primes];
    int multiples[limit][limit];
    
    int *init = &numbers[0];
    int *end = &numbers[limit - 1];
    int *multpointer = &multiples[0][0];

    count(numbers, limit);

    for (int i = 2; i < limit; i++)
    {
        for (int j = 2; j < limit; j++)
        {
            int ii = i - 2;
            int jj = j - 2;
            if( i*j <= limit + 1)
                multiples[ii][jj] = i * j;
            else
                multiples[ii][jj] = 0;
        }
    }
    while(init <= end)
    {
        while (multpointer < &multiples[limit][limit])
        {
            if (*multpointer != *init && *multpointer < *end)
            {
                multpointer++;
            }else if (*init == *multpointer)
            {
                *init++;
                multpointer = &multiples[0][0];
            }else if (*multpointer >= *end && *init > 1)
            {
                primes[counter] = *init;
                printf("%d ",primes[counter]);

                counter++;
                init++;
                multpointer = &multiples[0][0];
                
            }
        } 
    }
    
return 0;
}