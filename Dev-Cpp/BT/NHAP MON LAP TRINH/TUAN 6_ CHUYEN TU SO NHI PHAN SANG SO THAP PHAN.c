/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long n;
    
    do
    {
        printf("Nhap N: ");
        scanf("%d", &n);
        if (n <= 0)
        printf("Nhap lai");
    }
    while (n <= 0);

    int tam = n;
    int DC = 0;
    int i = 0;
    int k = 0;
    
    while (tam != 0)
    {
        k = tam % 10;
        tam /= 10;
        DC += k * pow(2,i);
        i++;
    }
    
    printf("Tong cua day so %d la: %d", n, DC);
    
    return 0;
    
    
}
