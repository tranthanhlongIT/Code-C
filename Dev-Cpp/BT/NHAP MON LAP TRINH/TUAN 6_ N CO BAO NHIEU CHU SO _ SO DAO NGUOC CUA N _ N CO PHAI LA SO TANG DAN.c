/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, a, b;
    
    do
    {
        printf("Nhap N: ");
        scanf("%d", &n);
        if (n <= 0)
        printf("Nhap lai\n");
    }
    while (n <= 0);
    
    int tam = n;
    int dem = 0;
    
    while (tam > 0)                                     // Bai a //
    {
        tam = tam/10;
        dem++;
    }
    printf("%d co %d chu so\n", n, dem);
    
    tam = n;                                            // Bai b //
    
    int dn = 0;
    while (tam > 0)
    {
        dn = dn * 10 + tam % 10;
        tam = tam/10;
    }    
    printf("Dao nguoc cua %d la: %d\n", n, dn);
    
    
    int sosau = n%10;                                   // Bai c //
    tam = n/10;
    
    while (tam > 0)
    {
        if (tam % 10 > sosau)
        {
        printf("%d khong co cac so tang dan", n);
        break;
        }
        else
        {
            sosau = tam % 10;
        }
            tam = tam/10;
    }
    if (tam == 0)
    printf("%d co cac chu so tang dan", n);
    
    
    
    
    return 0;
}
