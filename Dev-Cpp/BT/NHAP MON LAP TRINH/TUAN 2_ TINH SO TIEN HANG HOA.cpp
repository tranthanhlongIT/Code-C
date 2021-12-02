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
    double T = 0;
    double S = 0;
    double Z = 0;
    printf("Nhap so luong hang: ");
    scanf("%d", &n);
    printf("Nhap don gia hang: ");
    scanf("%lf", &x);
    T = n*x*12/100 ;
    printf("Giam Gia: %.2lf\n", T);
    S = n*x*5/100 ;
    printf("Cuoc van chuyen: %.2lf\n", S);
    Z = n*x-T+S ;
    printf("So tien phai tra: %.2lf\n", Z);
    
    
    return 0;
}
