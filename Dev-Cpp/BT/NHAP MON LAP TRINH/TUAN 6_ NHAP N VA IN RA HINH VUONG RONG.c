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
    
    for (int i = 1; i <= n; i++)              // HINH VUONG //
	{
		for (int j = 1; j <= n; j++)
		{
		    if (i==1 || i==n || j==1 || j==n)
			printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
    return 0;
}