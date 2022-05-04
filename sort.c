#include <stdio.h>
#include <stdlib.h>

void Min_Max(int arr[], int size, int *min, int *max, int *repeats)
{
    *max = arr[0];
    *min = *max; 

    for (size_t i = 0; i < size; i++)
    {
        if (*max <  arr[i])
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == *max || arr[i] == *min)
            *(repeats)+=1;
    }
}

/*
void PutMinMax(int arr1[],int arr2[],int sizecat, int *orcat)
{
    *orcat = arr1[0];
    *(orcat + sizecat) = arr1[1];
    for (size_t i = 1; i < cat_end_index; i++)
    {
        j = i - 1;
        *(orcat + i) = *(arr2 + j);
    }
}
*/

void sort(int arr[],int size,int *sorted)
{
    int newsize;
    int min, max;
    int repeats = 0;
    Min_Max(arr,size,&min,&max,&repeats);
    //printf("%d\n",min);
    //printf("%d\n",max);
    if (min == max){
        newsize = 1;
        *sorted = arr[0];
    }else if (size <= 2){
            *sorted = min;
            *(sorted + 1) = max;
        }else{
            newsize = size - repeats;
            *sorted = min;
            /*
            for (size_t i = 1; i < newsize-2; i++)
            {
                *(sorted + i) = 0;
            }
            */
            *(sorted + (newsize - 1)) = max;
           
            int newarr[newsize];
            int *point = arr;
            int *end = point + size;
            int *ptr = &newarr[0];
            for(point; point < end; point++)
            {
                if (*point == min || *point == max){
                    continue;
                }
                else{
                    *ptr = *point;
                    ptr++;
                }
            }
            for (size_t i = 0; i < newsize; i++)
            {
                printf("%d ",newarr[i]);
            }
            printf("\n");
            sorted++;
            sort(newarr,newsize,sorted);
        }
}
int main()
{
    int arr[] = {4,22,2,-9,2,6,6,6,6,2,8,-34,3,0,-2,5,9,9,9,-7,2,9,8,19,205,12};
    //int arr[] = {4,22,2,-9,2,6,2,8,-34,3,-2,5,-7,2,9,8,19,205,51,2,25,9,8,2,-52,70,-72,59,74,543,2,5,2,-2,7,-5,81,-8,53,24,87,-8,6,82,1,-26,64,-994,85,-266,5,63,-6,34,468,-288,902,6,-3,3,35,7,28,6,244,5,565,-7,7,51,32,2,-57,4,3,-9,27,-6,27,-67,-64,7,9,7,2,51,53,-805,81,-92,5,-234,-6,234,54,53,59,6,756,-53433,87,1,137,-53433,5,-53433,9,89,11030,11030,11030,11030,-574,-574,1,-2364,-6,90,554,593,159,-6,-9756,-87,190,1337,-5,-1234,92,-89,10322};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sorted[size];
    int *sortpoint = &sorted[0];
    sort(arr,size,sortpoint);

    for (size_t i = 0; i < size; i++)
    {
        printf("%d ",sorted[i]);
    }           
    return 0;
}
