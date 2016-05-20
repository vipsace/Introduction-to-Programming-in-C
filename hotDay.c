#include<stdio.h>

#define DAYS 365

int main()
{
    float temp[DAYS], max;
    int hottestDay, i;

    for(i=0;i<DAYS;i++){
        scanf("%f", &temp[i]);
    }
 
    hottestDay = 0;

    for(i=0;i<DAYS;i++){
        if(max<temp[i]){
            hottestDay = i;
            max = temp[i];
        }
    }

    printf("The hottest day was Day %d with temperature %f ",hottestDay,max);

    return 0;
 
}

