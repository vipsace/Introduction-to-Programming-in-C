#include<stdio.h>
int BinarySearch(int A[], int, int);


int BinarySearch(int *A, int elem , int array_size)
{

	int  beg = 0 , last = array_size-1;

        int mid ;

	while(beg<last) 
	{
	mid = (beg+last)/2; 
	
	if ( A[mid] < elem ){
            beg = mid+1; 
	}
	
	else if( A[mid]>elem) { last = mid -1 ; } 
	
	else if (A[mid]==elem) { return mid; }

	else return -1;	
		
	}

	
}
		 //Driver Program to test the function 
int main()
{
	int A[]={1,2,3,4,5,6,7,8,9,10};	
	int loc ;

	loc = BinarySearch(A,4,10);
	printf("%d\n",loc);

	return 0;
}

