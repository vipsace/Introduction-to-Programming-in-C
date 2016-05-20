#include<stdio.h>

int main()
{

    int N, sum=0;

    scanf("%d", &N);
    while(N>9)
    {
        sum =0;
        while(N>0){
            sum += N%10;
            N=N/10;
     }

   // printf("%d \n" ,sum); 
    N = sum;
    }

    printf("%d", N);
    return 0;

}
