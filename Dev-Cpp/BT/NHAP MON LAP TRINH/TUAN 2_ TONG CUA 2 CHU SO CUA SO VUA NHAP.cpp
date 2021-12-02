/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b ;
    printf("nhap vao 2 so nguyen duong co 2 chu so: ");
    scanf("%d%d", &a,&b);
    int sum = a+b;
    printf("Tong 2 so nguyen duong: %d\n", sum);
    int sodau = sum/10;
    int sosau = sum%10;
    int tong = sodau + sosau;
    printf("Tong cua 2 chu so cua so vua nhap: %d", tong);

    return 0;
}
