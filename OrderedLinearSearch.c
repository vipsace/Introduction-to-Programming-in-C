#include<stdio.h>

int Search(int[], int, int);

int Search(int data[], int size, int value){

    int index;

    for(index = 0; index<size; index++){
        if(data[index] > value )
            return -1;
        else if(data[index] == value)
            return index;
    }

    return -1;
}
int main(void)
{
    int A[10]={1,2,3,4,5,6,7,8,9,10};

    int index ;

    index = Search(A,10,5);
    if(index==-1) printf("Key not found");
    else printf("key found at index %d",index);

    return 0;

}

