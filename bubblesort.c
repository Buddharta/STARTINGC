#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//Random number genereator.
int randomNumber(int numb, int min, int max){
        int PID = getpid();
        int tiem = time(NULL);
        srand((PID * numb) + tiem);//function tha changes the random number seed.
        if (rand()<= max && min <= rand)
        {
            return rand();
        }else
        randomNumber(rand(),min,max);
        //printf("PID:%d\nTime: %d\n",PID,time);
}

int compare(int num1, int numb2, int order){
    return 0;
}

void bubbleSort(int array[],int num, int (*compare)(int,int,int)){

}

int main()
{
    size_t count;
    puts("Enter the length of the array:");
    scanf("%zu",&count);
    int arr[count];
    for (size_t i = 0; i < count; i++)
    {
        arr[i] = randomNumber(i,0,500);
        printf("A[%zu] = %d ", i, arr[i]);
    }
    
    return 0;
}