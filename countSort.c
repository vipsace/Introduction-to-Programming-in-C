#include<stdio.h>
#define RANGE 10

void countSort(int arr[], int size){

    int output[size];  // It will contain the output array

    int count[RANGE+1], i; // Array to store count of distinct values

    for(i = 0;i < RANGE+1; i++) count[i]=0;
   
    // Store count of each element
    for(i = 0; i < size; ++i) 
        ++count[arr[i]];
    
    for(i = 1; i <= RANGE; ++i)
         count[i] += count[i-1];
    
    for(i = 0; i < size; i++){
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }
   
    //copy output array to arr
    for(i = 0; i < size ; i++)
        arr[i] = output[i];

}


int main()
{

    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int i;
   countSort(arr,10);

    // Printing sorted array
    for(i=0;i<10;i++)
       printf("%d  ",arr[i]); 
   
    return 0;
}





   
    


    

