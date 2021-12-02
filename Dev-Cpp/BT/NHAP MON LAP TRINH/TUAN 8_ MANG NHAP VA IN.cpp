/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
void InputArray(int[], int);
void OutputArray(int[], int);

int main()
{
	int Arr[100], N;
	do
	{
		printf("Nhap N so phan tu cua mang: ");
		scanf("%d", &N);
	}
	while (N <= 0);
	printf("Nhap cac phan tu cua mang: \n");
	InputArray(Arr, N);
	printf("In cac phan tu cua mang: \n");
	OutputArray(Arr, N);
	return 0;
}

void InputArray(int Arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("A[%d]:", i);
		scanf("%d", &Arr[i]);
	}
}

void OutputArray(int Arr[], int N)
{
	for (int i = 0; i < N; i++)
	printf("%4d",Arr[i]);
}
