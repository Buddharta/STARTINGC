#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//Random number genereator.
int randomNumber(int numb, int range){
        int PID = getpid();
        int tiem = time(NULL);
        srand(PID * numb + tiem);//function tha changes the random number seed.
        //printf("PID:%d\nTime: %d\n",PID,time);
        return rand() % range;
}

int main()
{
 for(int i = 1; i < 51; i++){
 int num = randomNumber(i, 50);
 printf("%d\n",num);
 }
 return 0;
}
