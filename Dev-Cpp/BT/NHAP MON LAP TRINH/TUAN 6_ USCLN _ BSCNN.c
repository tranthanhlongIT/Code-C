/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x, y, i, m, o, USCLN;
    int BSCNN = 1;
    do
    {
        printf("Nhap x: ");
        scanf("%d", &x);
        printf("Nhap y: ");
        scanf("%d", &y);
        if (x <= 0 || y <= 0)
        printf("Nhap lai");
    }
    while (x <= 0 || y <= 0);
    
    for (i = 1; i <= x || i <= y; i++) 
    {
        if (x % i == 0 && y % i == 0)
        USCLN = i;
    }
        
    if (x > y)
    m = o = x;
    else m = o = y;
    
    while(1)
    {
        if (m % x == 0 && m % y == 0) 
        {
        BSCNN = m;
        break;
        }
        m += o;
    }
    
    printf("USCLN = %d\n", USCLN);
    printf("BSCNN = %d", BSCNN);
    
   
    return 0;
}
