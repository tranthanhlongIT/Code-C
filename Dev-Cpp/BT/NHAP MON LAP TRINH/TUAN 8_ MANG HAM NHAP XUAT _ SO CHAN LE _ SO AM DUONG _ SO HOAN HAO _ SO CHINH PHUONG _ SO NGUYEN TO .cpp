/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#define max 100
void NhapSoPhanTu(int &N);
void NhapPhanTu(int a[], int N);
void PhanTuLe(int a[], int N);
void PhanTuChan(int a[], int N);
void PhanTuDuong(int a[], int N);
void PhanTuAm(int a[], int N);
void PhanTuSoNguyenTo(int a[], int N);
void PhanTuSoHoanHao(int a[], int N);
void PhanTuSoChinhPhuong(int a[], int N);

int main()
{
	int N;
	int a[max];
	int i;
	int tong = 0;
	int MAX;
	int z;
	NhapSoPhanTu(N);
	NhapPhanTu(a, N);
	PhanTuLe(a, N);
	PhanTuChan(a, N);
	PhanTuDuong(a, N);
	PhanTuAm(a, N);
	PhanTuSoNguyenTo(a, N);
	PhanTuSoHoanHao(a, N);
	PhanTuSoChinhPhuong(a, N);
}	


void NhapSoPhanTu(int &N)
{
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if (N <= 0)
		printf("Nhap lai\n");
	}
	while (N <= 0 || N > max);
}

void NhapPhanTu(int a[], int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("Phan tu thu %d la: ", i+1);
		scanf("%d", &a[i]);
	}
}


void PhanTuLe(int a[], int N)
{
	printf("In cac phan tu co gia tri le ra man hinh: ");
	for (int i = 0; i < N; i++)
	{
		if (a[i] % 2 != 0)	
		printf("%3d", a[i]);
	}
}

void PhanTuChan(int a[], int N)
{
	printf("\nIn cac phan tu co gia tri chan ra man hinh: ");
	for (int i = 0; i < N; i++)
	{	
		if (a[i] % 2 == 0)
		printf("%3d", a[i]);
	}
}

void PhanTuDuong(int a[], int N)
{
	printf("\nIn cac phan tu co gia tri duong ra man hinh: ");
	for (int i = 0; i < N; i++)
	{
		if (a[i] >= 0)
		printf("%3d", a[i]);
	}
}

void PhanTuAm(int a[], int N)
{
	printf("\nIn cac phan tu co gia tri am ra man hinh: ");
	for (int i = 0; i < N; i++)
	{
		if (a[i] < 0)
		printf("%3d", a[i]);
	}
}

void PhanTuSoNguyenTo(int a[], int N)
{
	int j;
	printf("\nIn cac phan tu la so nguyen to ra man hinh: ");
	for (int i = 0; i < N; i++)
	{
		for (j = 2; j < a[i]; j++)
    	{
        	if (a[i] % j == 0)
        	break;
    	}    
   		if (a[i] == j)
    	printf("%3d", a[i]);
	}
}

void PhanTuSoHoanHao(int a[], int N)
{
	int tong = 0;
	int z;
	printf("\nIn cac phan tu la so hoan hao ra man hinh: ");
	for (int i = 0; i < N; i++)
	{
		tong = 0;
		for (z = 1; z < a[i]; z++)
    		{    
       		if ((a[i] % z == 0))
        	tong += z;
   			}
    	if (tong == a[i])
    	printf("%3d", a[i]);
	}
	
}

void PhanTuSoChinhPhuong(int a[], int N)
{
	int k = 0;
	printf("\nIn cac phan tu la so chinh phuong ra man hinh: ");
	for (int i = 0; i < N; i++)
	{
    	while(k*k <= a[i])
		{
        	if (k * k == a[i])
            printf("%3d", a[i]);
        	k++;
    	}
    }
}

