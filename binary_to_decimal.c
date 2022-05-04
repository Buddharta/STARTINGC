#include <stdio.h>
#include <stdlib.h>
/*BINARY TO DECIMAL CONVERTER*/

int main()
{
    int r;
    int p = 1;
    int binary;
    int decimal = 0;
    printf("Enter a binary number\n");
    scanf("%u",&binary);

    int numb = binary;
    while (binary != 0)
    {
        r = binary % 10;
        decimal = decimal + p * r;
        binary = binary/10;
        p = 2*p;
    }
    printf("The decimal equivalent of %u is %u",numb, decimal);
return decimal;
}