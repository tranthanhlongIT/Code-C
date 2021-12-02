/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double V, K;
    double dai, rong;
    double S;
    double Z;
    printf("Nhap V, K: ");
    scanf("%lf%lf", &V, &K);
    /* dai + rong = V
       dai + (dai - K) = V
       dai = (V + K)/2 */
    dai = (V + K)/2;
    rong = dai - K;
    S = dai*rong;
    Z = S * 55 / 100;
    printf(" Chieu dai la: %.2lf\n", dai);
    printf(" Chieu rong la: %.2lf\n", rong);
    printf(" Dien tich hcn la: %.2lf\n", S);
    printf(" Dien tich con lai: %.2lf\n", Z);
    

    return 0;
}
