/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    double S = 0;
    double P = 0;
    printf(" Nhap canh a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    P = (a + b + c)/2.0;
    S = sqrt(P*(P-a)*(P-b)*(P-c));
    printf(" Dien tich tam giac la: %.2lf", S);


    return 0;
}
