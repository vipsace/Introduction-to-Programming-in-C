#include<stdio.h>


float expo(int x, int n){

    if(n < 0) return expo(1/x,n);
    if(n == 0) return 1;
    if(n ==1) return x;

    if(n%2==0) return expo(x*x, n/2);
    if(n%2 !=0) return expo(x*x, (n-1)/2)*x;

}

int evalPolynomial(int *coef, int deg, int v){

    int poly = 0, i;   

    for(i=deg ; i >= 0; i--)
        poly  = poly + ( coef[i]*expo(v,deg-i) );

     return poly;

}

main()
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

}
   




  

