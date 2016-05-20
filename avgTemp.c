#include<stdio.h>

#define DAYS 365

int main()
{
    float temp[DAYS];
    float sum = 0.0, average;
    int i;

    for(i=0;i<DAYS;i++){
        scanf("%f", &temp[i]);
    }

    for(i=0;i<DAYS;i++){
        sum += temp[i];
    }

    average = sum/DAYS;
    printf("Average temperature = %f ",sum);

    return 0;
}

