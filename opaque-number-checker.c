#include <stdio.h>
#include <stdlib.h>

/*
* Opaque number verifier: 
* An opaque number is a number for which its digits are pair & odd in alternance and its first and last digits cannot be the largest of them.
*/
int greater_than_digits(m,n);
int main()
{
    int numb,frstdig,lastdig;
    int q,r ,digit;
    int ans = 0;
    
    printf("Please introduce a number\n");
    scanf("%d",&numb);
    q = numb;
    frstdig = numb - (numb/10) * 10;
    printf("Debugging: first digit %d\n",frstdig);
    while (q != 0)
    {
        digit = q % 10;
        q = q/10;
        
        r = q % 10;
        if (digit % 2 == 0)
        {
            if (r % 2 == 0)
            printf("%d is not a opaque number\n",numb);
        }
        else
            if (r % 2 == 1)
            printf("%d is not a opaque number\n",numb);
    }

    lastdig = digit;
    printf("Debugging: last digit %d\n",lastdig);
    if (greater_than_digits(frstdig,numb)||greater_than_digits(lastdig,numb))
        printf("%d is not a opaque number\n",numb);
    else
        printf("%d is a opaque number\n",numb);
    return 0;
}

int greater_than_digits(int m, int n)
{
    int digit;
    do
    {
        digit = n % 10;
        printf("Debugging: digit %d\n",digit);
        n = n/10;
        if(m < digit)
        return 0;
        else if (n == 0 && m > digit)
        return 1;
        else
        continue;          
    }while (n != 0);
}