/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N;
    do
    {
        printf("Nhap N: ");
        scanf("%d", &N);
        if (N <= 0)
        printf("Nhap lai");
    }
    while (N <= 0);
    
    for (int i = 1; i <= N; i++)
        if ( N % i == 0)
        printf("%d / %d = %d \n", N, i, N/i);
    return 0;
}
