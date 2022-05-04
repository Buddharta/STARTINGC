#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many rows do you want in your pyramid?\n");
    scanf("%u",&n);
    for ( int i = 1; i <= n ; i++)
    {
        for ( int j = 1; j <= 2*n-1 ; j++)
        {
            if ((j <= n+(i-1)) && (n-(i-1) <= j))
                printf("#");
            else
                printf(" ");
       }
       printf("\n");
    }
   return 0; 
}