#include <stdio.h>
#include <stdlib.h>

/*
STRONG NUMBER CHECKER
* A strong number n is a number such that if digits of n are a_1, a_2, ... , a_k, then:
* N = a_1! + a_2! + ... + a_n!,  where m!=m(m-1)! (here we are going to take numers of base 10 only).
*/

int main()
{
    int n, q, r;
    int ans = 0;
    int fact = 1;
    printf("Please insert an integer number n\n");
    scanf("%d",&n);

    q = n;
    while (q != 0)
    {
        r = q % 10;
        for (int i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        ans = ans + fact;
        q = q/10;
        fact = 1;
    }
    if (ans == n)
        printf("n = %d is a strong number\n",n);
    else
        printf("n = %d is not a strong number\n",n);
    
    return 0;
}