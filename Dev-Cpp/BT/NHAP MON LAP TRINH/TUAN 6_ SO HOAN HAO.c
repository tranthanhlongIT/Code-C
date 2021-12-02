/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int tong = 0;
    int N;
    int i;
    do
    {
        printf("Nhap N: ");
        scanf("%d", &N);
        if (N <= 0)
        printf("Nhap lai");
    }
    while (N < 0);
    
	for (i = 1; i < N; i++)
    {    
        if (N % i == 0)
        tong += i;
    }

    
    if (tong == N)
         printf("%d la so hoan thien", N);
    else printf("%d la so khong hoan thien", N);
    return 0;

    
}
