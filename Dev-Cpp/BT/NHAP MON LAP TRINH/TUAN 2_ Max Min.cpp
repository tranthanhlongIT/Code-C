/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Nhap a,b,c: ");
    scanf("%d%d%d", &a,&b,&c);
    int max;
    max = a>b ? a:b;
    max = max>c ? max:c;
    printf("max = %d\n", max);
    
    printf(" Nhap a,b,c,d: ");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    int min;
    min = a<b ? a:b;
    min = min<c ? min:c;
    min = min<d ? min:d;
    printf("min = %d", min);
    

    return 0;
}
