/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N;
    int P = 1;
    do
    {
        printf("Nhap N: ");
        scanf("%d", &N);
        if ( N <= 0)
        printf("Nhap lai");
    }
    while (N <= 0);
    
    for ( int i = 1; i <= N; i++)
    P *= i;
    
    printf("Giai thua cua n la: %d", P);
    return 0;
}
