/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    long tong = 0;
    
    do
    {
        printf("Nhap N: ");
        scanf("%d", &N);
        if (N > 0)
            tong = tong + N;
        else break;
    }
    while (N>0);
    
    printf("Tong cac so duong vua nhap: %ld ", tong);

    return 0;
}




