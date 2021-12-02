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
    double T=0;
    printf(" nhap n: ");
    scanf("%d", &n);
    printf("nhap x: ");
    scanf("%lf", &x);
    T = pow(x,1.0/n);
    printf("Can bac n cua x: %.2lf", T);
    

    return 0;
}
