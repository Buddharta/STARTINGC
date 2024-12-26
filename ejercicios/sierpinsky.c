#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many rows do you want in your pyramid?\n");
    scanf("%u",&n);
    for ( int ii = 1; ii <= n ; ii++)
    {
        for ( int jj = 1; jj <=2 * n ; jj++)
        {
            if ((jj <= n+(ii-1)) && (n-(ii-1) <= jj))
                printf("*");
            else
                printf(" ");
       }
       printf("\n");
    }
   return 0; 
}
