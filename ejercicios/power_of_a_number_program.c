#include <stdio.h>
#include <stdlib.h>
/*POWER OF A NUMBER PROGRAM*/

int main()
{
    float x;
    double pow_x = 1.0;
    int k;
    int expo;
    printf("Please introduce a number\n");
    scanf("%f",&x);
    printf("and the exponent you wish to take it\n");
    scanf("%d",&k);
    
    expo = k;

    if ((k == 0)&&(x != 0.0))
    {
        pow_x = 1;
        printf("%.10f to the power %d is %.10f",x, k, pow_x);
    }
    else if((k == 0)&&(x == 0.0))
        printf("Error: 0 to the power 0 is undefined\n");
    else
    {
        while (expo != 0)
        {
            if(expo > 0){
            pow_x = x * pow_x; 
            expo--;}
            else{
            pow_x = (1.0/x) * pow_x;
            expo++;}
        }
        printf("%.10f to the power %d is %.10f",x ,k ,pow_x);
    }
return pow_x;
}