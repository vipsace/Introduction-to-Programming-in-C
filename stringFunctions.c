#include<stdio.h>

/*Function to find the length of string A */

void stringLength(char *A){

    int i = 0;
    while(A[i]!= '\0') i++;
 
    return i;
}

/* Function to copy contents of string A to B assuming B has enough space to hold*/

void stringCopy(char *A, char *B, int N1){

    int N1 = strLenghth(N1);
    int i;

    for(k=0;k<N1;k++)
        B[k]=A[k];
}

/* Function to compare two strings based on lexographic ordering */

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




