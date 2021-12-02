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

	printf("So nguyen to nho hon hoac bang %d la: ", N);
	
    for (i = 2; i <= N; i++)
    {
    	for (z = 2; z < N; z++)
    	{
        if (i % z == 0)
        break;
    	}    
    if (i == z)
    	printf("%d   ", i);
    }
}

