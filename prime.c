#include<stdio.h>
#include<math.h>
//Program to generate prime numbers
#define N 100

int main(void)
{
    int p, i, primes[N], primeIndex;
    int isPrime;

    primes[0] = 2;
    primes[1] = 3;
    primeIndex = 2;

    for(p=5; p<=N; p=p+2) //iterate over all od numbers <=N
    {
        isPrime = 1;  //assume that it is prime
        for(i=1; i<primeIndex; i++)
        {
            //if p is divisible by some prime i , then p is not prime
            if(p%primes[i] == 0)
                isPrime=0;
        }
        if( isPrime ==1 )
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for(i = 0; i < primeIndex; i++)
    {
        printf("%d ", primes[i]);
    }

    return 0;
}



