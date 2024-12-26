#include <stdio.h>
#include <stdlib.h>
/*FIBONACCI*/

int main()
{
    int f_0, f_1, n;
    int fib;
    printf("Please intoduce the first two numbers of your fibonacci sequence\n");
    scanf("%d" "%d",&f_0,&f_1);
    printf("Please intoduce the lenght of your fibonacci sequence\n");
    scanf("%d",&n);
    printf("Fibonacci(0) = %d \n", f_0);    
    for ( int i = 1; i <= n; i++ )
    {   
        printf("Fibonacci(%d) = %d \n", i, f_1);
        fib = f_1 + f_0;
        f_0 = f_1;
        f_1 = fib;
    }
return 0;
}