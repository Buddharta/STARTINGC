#include <stdio.h>
#include <stdlib.h>
/*FLOYDS TRIANGLE*/

int main()
{
    int n;
    printf("How many rows do you want in your triangle?\n");
    scanf("%u",&n);
    printf("\n");

    for ( int i = 1; i <= n; i++)
    {
        for ( int j = 1; j <= n; j++)
        {
            if (j <= i)
                printf("%d ", j + i*(i-1)/2);
            else
                printf(" ");
       }
       printf("\n");
    }
   return 0; 
}

