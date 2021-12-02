/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;
    double c = 0;
    printf("Nhap canh a, canh b: ");
    scanf("%lf%lf", &a, &b);
    c = sqrt(pow(a,2) + pow(b,2));
    printf("Canh c = %.2lf", c);

}
