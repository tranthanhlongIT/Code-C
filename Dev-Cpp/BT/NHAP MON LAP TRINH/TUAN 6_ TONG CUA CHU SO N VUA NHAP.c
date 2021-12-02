/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    
    do
    {
        printf("Nhap N: ");
        scanf("%d", &n);
        if (n <= 0)
        printf("Nhap lai");
    }
    while (n <= 0);

    int tam = n;
    int k = 0;
    int tong = 0;
    
    while (tam > 0)
    {                                   // VD:
        k = tam % 10;           //  145 % 10 = 5   -> 14 % 10 = 4  -> 1 % 10 = 1
        tam = tam/10;             //  145 / 10 = 14  -> 14 / 10 = 1  -> 1 / 10 = 0
        tong += k;              //  5  + 4  + 1  = 10 
    }
    
    printf("Tong cua day so %d la: %d", n, tong);
    
    
}
