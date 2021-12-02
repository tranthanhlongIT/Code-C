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
    int i;
    do 
    {
        printf("Nhap N: ");
        scanf("%d", &N);
        if (N < 2)
        printf("Nhap lai\n");
    }
    while (N < 2);
    
    for (i = 2; i <= N-1; i++)
    {
        if( N % i == 0)
        break;
    }
    if (i == N)
         printf("%d la so nguyen to\n", N);
    else printf("%d khong phai so nguyen to\n", N);
    
    return 0;
}
 
