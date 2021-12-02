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
    printf("Nhap lai\n");
    }
    while (n <= 0);


    for (int i = 1; i <= n; i++)            // HINH TAM GIAC VUONG //
	{
		for (int j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
 
    return 0;
}