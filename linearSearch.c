#include<stdio.h>

int linearSearch(int[], int, int);

int linearSearch(int elements[], int size, int key){
    
    int index;

    for(index = 0; index < size ; index++){
        if(elements[index] == key)
           return index;
    }
    return -1;
}
int main(void)
{
    int A[10]={1,3,4,24,23,45,34,12,76,242};

    int index ;

    index = linearSearch(A,10,12);
    if(index==-1) printf("Key not found");
    else printf("key found at index %d",index);

    return 0;

}


        
      
