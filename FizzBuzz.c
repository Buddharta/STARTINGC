#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit;
    int mod15;
    printf("Please introduce a positive integer: \n");
    scanf("%d",&limit);

    for (size_t i = 0; i < limit; i++)
    {
        mod15 = i%15;
        switch (mod15)
        {
        case 0:
            printf("FizzBuzz, ");
            break;
        case 3:
        case 6:
        case 9:
            printf("Fizz, ");
            break;
        case 5:
        case 10:
            printf("Buzz, ");
            break;
        default:
            printf("%d, ",i);
            break;
        }
    }
    return 0;
}
