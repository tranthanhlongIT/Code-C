/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double x;
    double Z=0;
    double T=0;
    double K=0;
    printf("Nhap N: ");
    scanf("%d", &n);
    printf("Nhap X: ");
    scanf("%lf", &x);
    Z = (2 * x + sqrt(n))/13;
    printf("Z = %.2lf\n", Z);
    T = ((1.0/2)*x*n) + 2*32*pow(x,3); 
    printf("T = %.3lf\n", T);
    K = pow(x*x+x+1,n) + pow(x*x-x+1,n);
    printf("K = %.3lf\n", K);
    Z = (2*x*n+sqrt(x))/(1+2*x);
    printf("Z = %.3lf\n", Z);
    
    return 0;
}
