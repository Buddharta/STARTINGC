#include <stdio.h>
#include <stdlib.h>
/*Pruebas de modificadores de variables exter y static*/

int main()
{
    int k;
    for ( int p = 2; p < 1000; p++ )
    {   
        k = 2; 
        do
        { 
          if(p % k == 0)
            break;
          k++;
        }while (k <= p);              
        
        if (k == p)
            printf("P=%u is a prime number less than 1000\n",p);
    }
return 0;
}