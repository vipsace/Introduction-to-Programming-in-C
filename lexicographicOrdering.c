#include<stdio.h>

int strCompare(char *A, char *B, int N1, int N2){

    int k = 0;
    
    while((A[k] == B[k]) && k<N1 && k<N2)
        k++;

    if(N1==N2 && k==N1) printf("A=B");
    else if(A[k]=='\0') printf("A<B");
    else if(B[k]=='\0') printf("A>B");
    else if(A[k]<B[k]) printf("A<B");
    else printf("A>B");

}

