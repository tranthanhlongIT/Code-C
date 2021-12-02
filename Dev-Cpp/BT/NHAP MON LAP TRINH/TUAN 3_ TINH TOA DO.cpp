/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2;
    #define r 6371.01
    double D = 0;
    printf("Nhap x1, y1: ");
    scanf("%lf%lf", &x1, &y1);
    printf("Nhap x2, y2: ");
    scanf("%lf%lf", &x2, &y2);
    D = r * acos(sin(x1)*sin(x2)+cos(x1)*cos(x2)*cos(y1-y2));
    printf(" Xuat ra: %.10lf", D);
    return 0;
}
