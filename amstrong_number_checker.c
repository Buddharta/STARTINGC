#include <stdio.h>
#include <stdlib.h>

/*
AMSTRONG NUMBER CHECKER
* An amstrong number N of order n is a number such that if digits of N are a_1, a_2, ... , a_n, then:
* N = a_1^n + a_2^n + ... + a_n^n. (here we are going to take numers of base 10 only).
*/

int main()
{
    int n, q, r, o;
    int ord = 0;
    int ans = 0;
    int mul = 1;
    printf("Please insert an integer number n\n");
    scanf("%d",&n);

    q = n;
    while (q != 0)
    {
        q = q/10;
        ord++;
    }
    o = ord;
    q = n;
    
    while (q != 0)
    {
        r = q % 10;
        while (o != 0)
        {
            mul = mul * r;
            o--;
        }
        q = q/10;
        ans = ans + mul;
        o = ord;
        mul = 1;
    }

    if (ans == n)
        printf("n = %d is an amstrong number\n",n);
    else
        printf("n = %d is not a amstrong number\n",n);
    
    return 0;
}
