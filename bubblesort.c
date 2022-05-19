#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//Random number genereator.
int randomNumber(int numb,int min,int max){
        int length = max - min;
        if(length < 0){
                puts("Error: Incorrect bounds for interval");
                return 1;
        }
        int PID = getpid();
        int tiem = time(NULL);
        srand((PID + numb) + tiem);//function tha changes the random number seed.
        int randomValBounded = (rand() % length) + min;
return randomValBounded;
}
//Compare function depending on the given order type
int compare(int num1, int num2, int order){
        int caseVal;
        if ( order == 0 ){
                caseVal = (num1 < num2)? 0 : 1;
        }
        else if (order == 1){
                caseVal = (num1 > num2)? 0: 1;
        }
        else{
                puts("Wrong value for number ordering");
                caseVal = 2;
        }
return caseVal;
}

void bubbleSort(int array[],int num,int ord,int (*compare)(int,int,int)){
        int temp;
        for(size_t i = 0; i < num; i++){
                for(size_t j = 0; j < num-1; j++){
                        if(compare(array[j],array[j+1],ord) > 0){
                                temp = array[j];
                                array[j] = array[j+1]; //swapping values
                                array[j+1] = temp;
                        }
                }               
        }        
}

int main()
{
    size_t count;
    puts("Enter the length of the array:");
    scanf("%zu",&count);
    int arr[count];
    printf("Array= ");
    for (size_t i = 0; i < count; i++)
    {
        arr[i] = randomNumber(i,-10,10);
        printf("%d, ", arr[i]);
    }
    bubbleSort(arr,count,0,compare);
    printf("Sorted_Array= ");
    for (size_t i = 0; i < count; i++)
    {
        printf("%d, ", arr[i]);
    }
return 0;
}
