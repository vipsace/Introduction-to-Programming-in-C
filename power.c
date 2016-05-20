#include<stdio.h>

/* Function to calculate x^n for given x and n */

int power(int x, int n ){

    int counter;
    int value = 1;
    
    for(counter=0; counter <= n-1; counter++)
        value = value * x;

    return value;
}

main()
{
   printf("%d",power(2,0));
}

