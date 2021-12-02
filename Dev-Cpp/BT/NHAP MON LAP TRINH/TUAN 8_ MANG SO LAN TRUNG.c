/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100
#define x 1
#define y 10

int main()
{   
    int dem;
    int N;
    int a[max];
    int i;
    int same;
    int j;
    do
    {
        printf("Nhap so luong phan tu: ");
        scanf("%d", &N);
        if (N <= 0)
        printf("SAI");
    }
    while (N <= 0);
    
    printf("Cac phan tu trong mang: ");
    srand(time(0));
    for (i = 0; i < N; i++)
    {
        a[i] = x + rand() % (y - x + 1);
        printf("%3d", a[i]);
    }
    
	for (i = 0; i < N; i++)
	{	
		if (a[i] != -1)
		{
		same = a[i];
		int dem = 0;
		for (j = i+1; j < N; j++)
		{
			if (a[j] == same)
			{
			dem++;
			a[j] = - 1;
			}
		}
		printf("\n%d co %d lan trung", same, dem);
		}
	}
    return 0;
}
