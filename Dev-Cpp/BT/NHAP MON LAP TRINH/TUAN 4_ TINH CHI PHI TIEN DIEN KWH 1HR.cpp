/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define gia1 1000
#define gia2 1200
#define gia3 1600
#define gia4 2000

int main()
{   
    double a;
    printf("Nhap vao so KWh: ");
    scanf("%lf", &a);
    if (a > 0)
    {   
    if (a <= 100)
        a= a * gia1;
    else if ( a >= 101 && a <= 150)
        a= gia1 * 1 + (a - 100) * gia2;
    else if (a >= 151 && a <= 200)
        a= gia1 * 1 + 50 * gia2 + (a - 150) * gia3;
    else if (a >= 201)
        a= gia1 * 1 + 50 * gia2 + 50 * gia3 + (a - 200) * gia4;
    printf("So tien dien phai tra: %.1lf", a);
    }
    else
        printf("Nhap lai");
    return 0;
}
