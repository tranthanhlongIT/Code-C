/******************************************************************************

                            Online C Compiler.															/// TRAN THANH LONG  ///
                Code, Compile, Run and Debug C program online.											/// MSSV: 2199121 ///
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#define x 1
#define y 99
#define max 100

int Menu(int &choice);
void ThucHien(int choice, int N, int a[]);
void NhapMotSoNguyenDuongN(int &N);
void TaoSoNgauNhien(int a[], int N);
void KiemTraSoNguyenTo(int N);
void TinhGiaiThua(int N);
void KiemTraSoFibonaci(int N);
void KiemTraSoHoanThien(int N);



int Menu(int &choice)
{
	printf("----------Menu----------\n");
	printf("1. Nhap mot so nguyen duong\n");
	printf("2. Tao ra N so ngau nhien nam trong khoang tu 1 den 99\n");
	printf("3. In ra tat ca cac so nguyen to <= N\n");
	printf("4. Tinh N!\n");
	printf("5. In ra N so Fibonaci dau tien\n");
	printf("6. Kiem tra N co phai la so hoan thien hay khong\n");
	printf("0. Thoat chuong trinh\n");
	printf("-------------------------\n");
	printf("Vui long chon chuc nang: ");
	scanf("%d", &choice);
	printf("\n");
}

void ThucHien(int choice, int N, int a[])
{
	do
	{
		system("CLS");
		Menu(choice);
		switch(choice)
		{
			case 1: NhapMotSoNguyenDuongN(N);
					break;
			case 2: TaoSoNgauNhien(a, N);
					break;
			case 3: KiemTraSoNguyenTo(N);
					break;
			case 4: TinhGiaiThua(N);
			case 5: KiemTraSoFibonaci(N);
					break;
			case 6: KiemTraSoHoanThien(N);
					break;
			case 0: break;
			default: printf("Khong co chuc nang nay\n");
		}
		getch();
	}
	while (choice != 0);
}

void NhapMotSoNguyenDuongN(int &N)										/// NHAP N ///
{
	do
	{
		printf("Vui long nhap vao mot so nguyen duong: ");
		scanf("%d", &N);
		if (N < 0 || N > max)
		printf("Vui long nhap lai\n");
	}
	while (N < 0 || N > max);
}

void TaoSoNgauNhien(int a[], int N)									/// TAO SO NGAU NHIEN ///
{
	printf("Tao ra %d so ngau nhien trong khoang tu 1 den 99: ", N);
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		a[i] = x + rand() % (y - x + 1);
		printf(" %-9d", a[i]);
	} 
}

void KiemTraSoNguyenTo(int N)								//// IN RA SO NGUYEN TO <= N ////
{
	int i = 0;
	int z;
	int dem = 0;
	printf("In ra tat ca cac so nguyen to <= N: ");
	while (i <= N)					
	{									///        VD   ->			->			->			->
		for (z = 2; z < i; z++)      	///		z =   2  /   2   //	 2	 /	3	/	4 BREAK /    5
		{								///     i =   0  /   1   //	 2	 /	3	/	4       /    5
			if (i % z == 0)
			{
				break;
			}
		}
		if (z == i)
		{
			printf(" %-9d", i);
		}
		i++;
	}		
}


void TinhGiaiThua(int N)									/// TINH GIAI THUA CUA N ///
{
	int p = 1;
	printf("Giai thua cua %d la: ", N);
	for (int i = 1; i <= N; i++)
	{
		p *= i;
	}
	printf("%d", p);
}

void KiemTraSoFibonaci(int N)								/// IN RA N SO FIBONACI DAU TIEN ///
{
	int a = 1;
	int b = 1;
	int c = 0;
	printf("In ra 5 so Fibonaci dau tien: ");
	printf("%-5d%-5d", a, b);
	for (int i = 3; i <= N; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%-5d", c);
	}
}

void KiemTraSoHoanThien(int N)								/// KIEM TRA N CO PHAI LA SO HOAN HAO ///
{
	int tong = 0;
	for (int i = 1; i < N; i++)
	{
		if (N % i == 0)
		{
			tong += i;
		}
	}
	if (tong == N)
	{
		printf("\t%d la so hoan hao", N);
	}
	else printf("\t%d la so khong hoan hao", N);
}

int main()
{
	int choice;
	int N;
	int a[max];
	ThucHien(choice, N, a);
}
