#include<stdio.h>
void merge_sort(int[],int,int);
void Merge(int[],int,int,int);
void merge_sort(int arr[],int left,int right)
{
	if(left<right)
	{

	int mid=(left+right)/2;
	merge_sort(arr,left,mid);
	merge_sort(arr,mid+1,right);
	Merge(arr,left,mid,right);
	}
}


void Merge(int arr[] , int left , int mid , int right)
{
	int a= mid-left+1;
	int b= right-mid;
	int A[a],B[b];
	int i,j,k;
	//copy into temporary arrays
	for(i=0;i<a;i++) { A[i]=arr[left+i]; }
	for(j=0;j<b;j++) { B[j]=arr[mid+1+j]; }

	i=0;
	j=0;
	k=left;


	while(i<a && j <b)
	{
		if(A[i]<B[j])
			arr[k++]=A[i++];
		else
			arr[k++]=B[j++];

	}

	while(i<a)
	{
		arr[k++]=A[i++];
	}

	while(j<b)
	{
		arr[k++]=B[j++];
	}
}

//********************************************************************************************************

#define size 10

//Driver Program to test the function
int main()
{
  int i;
  int A[size];


   printf("Array before sorting is : \n ");

//Generating random integer array

  for (i = 0; i < size; i++)
   {
    A[i] = rand() % 1000 + 1;

    printf("%d ", A[i]) ;

   }

printf("\n Array after sorting is : \n");
	int arr_size= sizeof(A)/sizeof(A[0]);

	merge_sort(A,0,arr_size-1);

// Now Printing sorted array

    for(i=0;i<size;i++)
	printf("%d ", A[i]);
	printf("\n");

  return 0;

}



