#include <stdio.h>
#include <stdlib.h>
/*PALINDROME NUMBER CHECKER*/

int main()
{
    int n, q, r;
    int ans = 0;
    printf("Please insert an integer number n\n");
    scanf("%d",&n);

    q = n;
    while (q != 0)
    {
        r = q % 10;
        ans = ans * 10 + r;
        q = q/10;
    }
    if (ans == n)
        printf("n = %d is a palindrome number\n",n);
    else
        printf("n = %d is not a palindrome number\n",n);
    
    return 0;
}
