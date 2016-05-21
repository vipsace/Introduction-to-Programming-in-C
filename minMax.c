#include<stdio.h>

int minMax(int[], int);

int minMax(int *A, int size){

    int min;
    int max;
    int beg, i;

    if(size%2 !=0 ){
         min = max = A[0];
         beg = 1;
     }

    else{

        if(A[0]<A[1]){
            max = A[1];
            min = A[1];
            beg = 2;
         }
    }


    for(i = beg ; i < size ;i=i+2){
        if(A[i] < A[i+1]) {
            if(A[i] < min)  min = A[i];
            if(A[i+1] > max) max = A[i+1];
        }
        else{
            if(A[i] > max ) max = A[i];
            if(A[i+1] < min) min = A[i+1];
        }
    }


   printf("Min = %d and Max = %d \n",min,max);



}

main()
{

    int A[9] = {8,2,3,4,5,0,6,7,-3};


    minMax(A,9);


}






