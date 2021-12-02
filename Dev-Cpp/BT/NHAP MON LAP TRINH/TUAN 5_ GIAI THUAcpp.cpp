/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   
    int a;
    int b = 1;
    printf("Nhap a: ");
    scanf("%d", &a);
    
    switch(a)
    {
        case 9: b *= 9;
        case 8: b *= 8;
        case 7: b *= 7;
        case 6: b *= 6;
        case 5: b *= 5;
        case 4: b *= 4;
        case 3: b *= 3;
        case 2: b *= 2;
        case 1: b *= 1;
    }
    printf("Giai thua cua %d la: %d", a, b);
    return 0;
}

