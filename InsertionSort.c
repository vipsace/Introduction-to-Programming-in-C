#include<stdio.h>
int InsertionSort(int A[] , int );
int InsertionSort(int *A , int array_size)
{
	int i , j ,key;

	for(j=1;j<array_size;j++)
	{
		key=A[j];

		i=j-1;

		while( (i > -1) && ( A[i] > key ) )
		{
			A[i+1]=A[i];
			i=i-1;
			A[i+1]=key;
		}

	}


return 0;

}
//***********************************************************************************************************************************************

#define size 1000000

//Driver Program to test the function
int main()
{
  int i;
  int A[size];


   printf("Array before sorting is : \n ");

//Generating random array

  for (i = 0; i < size; i++)
   {
    A[i] = rand() % 1000 + 1;

    printf("%d ", A[i]) ;

   }

printf("\n Array after sorting is : \n");
	//Insert sort function here
	InsertionSort(A,size);

// Now Printing sorted array

for(i=0;i<size;i++)

	printf("%d ", A[i]);
	printf("\n");

  return 0;

}

