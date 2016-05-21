#include<stdio.h>

float expo(int, int);

float expo(int x, int n){

    if(n < 0) return expo(1/x,n);
    if(n == 0) return 1;
    if(n ==1) return x;

    if(n%2==0) return expo(x*x, n/2);
    if(n%2 !=0) return expo(x*x, (n-1)/2)*x;

}

int main(void)
{
    printf("%f", expo(2,5));

    return 0;
}

