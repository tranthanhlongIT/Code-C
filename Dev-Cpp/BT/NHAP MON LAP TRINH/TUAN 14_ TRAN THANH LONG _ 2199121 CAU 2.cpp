/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define max 100

void Menu(int &choice);
void ThucHien(int choice, int a[], int N);
void NhapSoPhanTu(int &N);
void NhapPhanTu(int N, int a[]);
void XuatPhanTu(int N, int a[]);
void TimPhanTuNhoNhatTrongMang(int a[], int N);
bool KiemTraSoHoanHao(int M);
void XuatSoHoanHaoTrongMang(int a[], int N);
void XuatCacSoLaBoiSoCua3(int a[], int N);

void Menu(int &choice)
{
	printf("-------------Menu--------------\n");
	printf("1. Nhap Phan Tu\n");
	printf("2. Tim Phan Tu Nho Nhat\n");
	printf("3. Xuat ra cac so hoan hao\n");
	printf("4. Xuat ra cac so la boi so cua 3 co trong mang\n");
	printf("0. Thoat\n");
	printf("-------------------------------\n");
	printf("Vui long chon chuc nang: ");
	scanf("%d", &choice);
}

void ThucHien(int choice, int a[], int N)
{
	do
	{
		system("CLS");
		Menu(choice);
		switch(choice)	
		{
			case 1: NhapPhanTu(N, a);
					XuatPhanTu(N, a);
					break;
			case 2: TimPhanTuNhoNhatTrongMang(a, N);
					break;
			case 3: XuatSoHoanHaoTrongMang(a, N);
					break;
			case 4: XuatCacSoLaBoiSoCua3(a, N);
					break;
			default: printf("Khong co chuc nang nay\n");
		}
		getch();
	}
	while (choice != 0);
}

void NhapSoPhanTu(int &N)
{
	do 
	{
		printf("Vui Long Nhap So Phan Tu: ");
		scanf("%d", &N);
		if (N < 0)
		printf("Vui long nhap lai!\n");
	}
	while (N < 0);
}
	
void NhapPhanTu(int N, int a[])
{
	printf("Nhap phan tu: \n");
	for (int i = 0; i < N; i++)
	{
		printf("Phan tu thu %d la: ", i+1);
		scanf("%d", &a[i]);
	}
}

void XuatPhanTu(int N, int a[])
{
	printf("\n");
	printf("Xuat Phan Tu: \n");
	for (int i = 0; i < N; i++)
	{
		printf("Phan tu thu %d la: %d\n", i+1, a[i]);
	}
}

void TimPhanTuNhoNhatTrongMang(int a[], int N)
{	
	int i = 0;
	int min = a[0];
	for (i = 0; i < N; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("Phan tu nho nhat trong mang la: %d", min);
}

bool KiemTraSoHoanHao(int M)
{
	int tong = 1;
	for (int i = 2; i < M; i++)
	{                                                                                                                                                     
		if (M % i == 0)
		{
			tong += i;
		}
	}
	if (tong == M)
	{
		return true;                              
	}
	return false;
}

void XuatSoHoanHaoTrongMang(int a[], int N)
{
	printf("Xuat ra cac So Hoan Hao Trong Mang: ");
	for (int i = 0; i < N; i++)
	{
		if (KiemTraSoHoanHao(a[i]))
		{
			printf("%d\t", a[i]);
		}
	}
}

void XuatCacSoLaBoiSoCua3(int a[], int N)
{
	printf("Xuat cac so la boi so cua 3: ");
	for (int i = 0; i < N; i++)
	{
		if (a[i] % 3 == 0)
		{
			printf("%-5d", a[i]);
		}
	}
}


int main()
{
	int N;
	int a[max];
	int choice;
	int tong[max];
	NhapSoPhanTu(N);
    ThucHien(choice, a, N);
	
	
	
	
}
