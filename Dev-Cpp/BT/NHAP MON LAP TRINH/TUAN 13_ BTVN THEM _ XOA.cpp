/******************************************************************************

                            Online C Compiler.																/// TRAN THANH LONG ///
                Code, Compile, Run and Debug C program online.												/// MSSV: 2199121 ///
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#define x -100
#define y 100
#define max 100


int Menu(int &choice);
int ThucHien(int choice, int a[], int &N, int t, int k, int s);
void NhapSoPhanTuN(int &N);
void CacPhanTuNgauNhien(int a[], int N);
void XuatMang(int a[], int N);
void InCacPhanTuNgauNhien(int a[], int N);
bool KiemTraDay(int N);
void NhapGiaTriPhanTuCanThem(int &t);
void Them1PhanTuDauMang(int a[], int &N, int t);
void Them1PhanTuCuoiMang(int a[], int &N, int t);
void NhapViTriCanThem(int &K);
void Them1PhanTuVitriBatKy(int a[], int &N, int t, int k);
void NhapPhanTuCanXoa(int &s);
void XoaPhanTuTrongMangBangVoiX(int a[], int N, int &s);

int Menu(int &choice)
{
	printf("\n");
	printf("--------Menu Mang Ngau Nhien--------\n");
	printf("1. In cac phan tu ra man hinh\n");
	printf("2. Them 1 phan tu vao dau mang\n");
	printf("3. Them 1 phan tu vao cuoi mang\n");
	printf("4. Them 1 phan tu vao vi tri bat ky\n");
	printf("5. Xoa phan tu trong mang co gia tri bang x\n");
	printf("0. Thoat\n");
	printf("-------------------------------------\n");
	printf("Vui long chon chuc nang: ");
	scanf("%d", &choice);
	printf("\n");
}

int ThucHien(int choice, int a[], int &N, int t, int k, int s)
{
	do
	{
		Menu(choice);
		switch(choice)
		{
			case 1: InCacPhanTuNgauNhien(a, N);
					break;
			case 2: NhapGiaTriPhanTuCanThem(t);
					Them1PhanTuDauMang(a, N, t);
					break;
			case 3: NhapGiaTriPhanTuCanThem(t);
					Them1PhanTuCuoiMang(a, N, t);
					break;
			case 4: NhapViTriCanThem(k);
					NhapGiaTriPhanTuCanThem(t);
					Them1PhanTuVitriBatKy(a, N, t, k);
					break;
			case 5: NhapPhanTuCanXoa(s);
					XoaPhanTuTrongMangBangVoiX(a, N, s);
					break;
			case 0: break;
			default: printf("Khong co chuc nang nay");
		}
		getch();
	}
	while (choice != 0);
}

void NhapSoPhanTuN(int &N)
{
	do
	{
		printf("Vui long nhap so N phan tu: ");
		scanf("%d", &N);
		if (N < 0 || N > max)
		printf("Vui long nhap lai\n");
	}
	while (N < 0 || N > max);
}


void CacPhanTuNgauNhien(int a[], int N)
{	
	int i, j;
	printf("In cac phan tu ra man hinh: ");
	srand(time(0));
	bool check;
	for (i = 0; i < N; i++)
	{
		check = false;
		do
		{
			a[i] = x + rand() % (y - x + 1);
			check = true;
			for (j = 0; (check) && (j < i); j++)		
			{
				check = (a[i] != a[j]);
			}
		}
		while (check == false);
	}
}

void XuatMang(int a[], int N)
{
	for (int i = 0; i < N; i++)
	{
	printf("%5d", a[i]);
	}
}

void InCacPhanTuNgauNhien(int a[], int N)
{
	CacPhanTuNgauNhien(a, N);
	XuatMang(a, N);
	printf("\n");
}

bool KiemTraDay(int N)
{
	return N == max;
}

void NhapGiaTriPhanTuCanThem(int &t)
{
	printf("Vui long nhap gia tri phan tu can them: ");
	scanf("%d", &t);
}

void Them1PhanTuDauMang(int a[], int &N, int t)
{
	if (KiemTraDay(N))
	{
		printf("Mang day nen khong them duoc\n");
		return;
	}
	for (int i = N - 1; i >= 0; i--)
	{
		a[i+1] = a[i];
	}
	a[0] = t;
	N++;
	XuatMang(a, N);
}

void Them1PhanTuCuoiMang(int a[], int &N, int t)
{
	if (KiemTraDay(N))
	{
		printf("Mang day nen khong them duoc\n");
		return;
	}
	a[N] = t;
	N++;
	XuatMang(a, N);
}

void NhapViTriCanThem(int &k)
{
	printf("Vui long nhap vi tri can them: ");
	scanf("%d", &k);
}

void Them1PhanTuVitriBatKy(int a[], int &N, int t, int k)
{
	if (KiemTraDay(N))
	{
		printf("Mang day nen khong them duoc\n");
		return;
	}
	for (int i = N - 1; i >= k; i--)
	{
		a[i+1] = a[i];
	}
	a[k] = t;
	N++;
	XuatMang(a, N);
}

void NhapPhanTuCanXoa(int &s)
{
	printf("Vui long nhap phan tu can xoa: ");
	scanf("%d", &s);
}

void XoaPhanTuTrongMangBangVoiX(int a[], int N, int &s)
{	

	int i;
	for (i = 0; i < N; i++)	
	{
		if (a[i] == s)
		{
			break;
		}
	}
	
	if (i == N)
	{
		printf("\n");
		printf("Khong co phan tu %d trong mang", s);
	}
	else 
	{
		for (int j = i + 1; j < N; j++)
		{
			a[j-1] = a[j];
		}
		N--;
		XuatMang(a, N);
	}
}


int main()
{
	
	int a[max];
	int N;
	int choice;
	int t;
	int k;
	int s;
	NhapSoPhanTuN(N);
	ThucHien(choice, a, N, t, k, s);
}
