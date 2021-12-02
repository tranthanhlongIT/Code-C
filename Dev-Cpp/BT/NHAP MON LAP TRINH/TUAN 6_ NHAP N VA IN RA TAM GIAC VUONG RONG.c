/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);


    printf("*");    // HINH TAM GIAC VUONG //
    printf("\n");
    
    for (int i = 2; i <= n - 1; i++)
    {   
        for (int j = 1; j <= i; j++)
        if (j == 1 || j == i)
            printf("*");
        else 
            printf(" ");
        printf("\n");
    }
    
    for (int i = 1; i <= n; i++)
        printf("*");
    
 
    return 0;
}