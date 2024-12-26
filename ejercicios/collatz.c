#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i=0;
    int nat;
    printf("Introduce a natural number N\n");
    scanf("%d",&nat);

    if (nat <= 0)
    {
        printf("%d is not a natural number\n",nat);
        return 1;
    }
    else
    {
        while(nat!=1)
        {
            printf("Collatz_Loop(%d)=%d\n",i,nat);
            if (nat%2==0)
            {
                nat=nat>>1;
            }
            else
            {
                nat=3*nat;
                nat++;
            }
        i++;
        }
    return 0;
    }
}