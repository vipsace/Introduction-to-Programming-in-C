#include<stdio.h>
int evalPolynomial(int *coef, int, int);
// Returns value of polynomial at x=v

int evalPolynomial(int *coef, int deg, int v){

    int poly=coef[0], i;
   
    //Evaluate value of Polynomial using Horner's method

     for(i=1 ;i <= deg; i++)
         poly = poly*v + coef[i];


    return poly;

}

int main(void)
{
    int i, coef[20], deg, result, v;

    printf("Input degree of polynomial :");
    scanf("%d",&deg);

    for(i=0; i <= deg; i++)
        scanf("%d",&coef[i]);

    printf("Input the value of v :");
    scanf("%d",&v);

    result = evalPolynomial(coef, deg, v);

    printf("%d",result);

    return 0;
}


