//This is a program to multiply two polynomials ax+b and cx+d 

#include<stdio.h>

int main()

{

    int a, b, c, d;
    int p2, p1, p0;

    printf("Enter a b c and d: ");
    scanf("%d %d %d %d",&a, &b, &c, &d);

    p2 = a*c;
    p1 = a*d + b*c;
    p0 = b*d;

    printf("The product is: %dx^2+%dx+%d\n",p2,p1,p0);

    return 0;

}
 

