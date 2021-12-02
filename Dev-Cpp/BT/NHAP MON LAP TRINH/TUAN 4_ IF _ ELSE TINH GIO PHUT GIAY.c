/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("nhap GIO: ");
    scanf("%d", &a);
    
    if ( a>=0 && a<=23)
    {
        printf("Nhap PHUT: ");
        scanf("%d", &b);
        
        if (b>=0 && b<=59)
        {
            printf("NHap GIAY: ");
            scanf("%d", &c);
        
            if (c>=0 && c<=59)
            {   
                int sum;
                sum = a * 3600 + b * 60 + c;
                printf("Tong so giay la: %d", sum);
            }
            printf("Vui long nhap lai");
        }
        else printf("Vui long nhap lai");
    }
    else printf("Vui long nhap lai");
    
    return 0;
}
