/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

void KiemTraSoNguyen(int &N)
{
    do
    {
        printf("Nhap N: ");
        scanf("%d", &N);
        if (N <=0 || N > 10)
            printf("Yeu cau nhap lai!!!\n");
    }
    while (N <= 0 || N > 10);
}

int main()
{	
	int N;
	KiemTraSoNguyen(N);
    for (int i = 1; i <= 10; i++)
        printf("%d * %d = %d \n", N, i, N*i);
	return 0;        
}

