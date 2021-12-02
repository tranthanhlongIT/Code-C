/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N;
    int i = 0;
    int z;
    
    do
    {
        printf("Nhap N: ");
        scanf("%d", &N);
        if (N <= 0)
        printf("Nhap lai\n");
    }
    while (N <= 0);
    
    printf("%d so nguyen to dau tien: ", N);
    
    int dem = 0;
    while (dem < N)
    {   
        for (z = 2; z < i; z++)
        {
        if (i % z == 0)
        break;
        }    
        if (i == z)
        {
        	printf("%d\t", i);
        	dem++;
		}
		i++;
    }
    
    return 0;
}
