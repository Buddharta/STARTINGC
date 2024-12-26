#include <stdio.h>
#include <stdlib.h>
/*FLOYDS TRIANGLE 2*/

int main()
{
    int n;
    int k = 1;
    printf("How many rows do you want in your triangle?\n");
    scanf("%u",&n);
    printf("\n");

    for ( int i = 1; i <= n * (n + 1)/2; i++)
    {
        if (i <= k * (k + 1)/2)
            printf("%d ", i);
        else{
            printf("\n");
            printf("%d ", i);
            k++;
        }
    }
   return 0; 
}
