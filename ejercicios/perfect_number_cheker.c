#include <stdio.h>
#include <stdlib.h>
/*PERFECT NUMBER CHECKER: A perfect number is a number that is equal to the sum of its propper divisors*/

int main()
{
    int n, i, r;
    int sum = 0;
    printf("Please insert an integer number n\n");
    scanf("%d",&n);

for ( i = 1; i < n; i++)
{
    r = n % i;
    if (r == 0)
        sum = sum + i;  
}
    if (sum == n)
        printf("n = %d is a perfect number\n",n);
    else
        printf("n = %d is not a perfect number\n",n);
    return 0;
}