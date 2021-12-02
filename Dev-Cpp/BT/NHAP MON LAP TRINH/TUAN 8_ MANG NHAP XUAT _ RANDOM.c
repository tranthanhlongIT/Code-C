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
#define y 50

void SoLuongHoNuoc(int N)
{
    do
    {
        printf("Nhap so ho nuoc: ");
        scanf("%d", &N);
        if (N <= 0)
        printf("Nhap lai");
    }
    while (N <= 0);
}

void LuongNuocBanDau(int a[], int N)
{
    printf("Luong nuoc ban dau cua ho: ");
	srand(time(0)); 
	for (int i = 0; i < N; i++)
	{
		a[i] = x + rand() % (y - x + 1);
	    printf("%3d", a[i]);
	}
}    

void LuongNuocBocHoi(int a[], int b[], int n)
{   
    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("\nNhap vao luong nuoc boc hoi cua ho thu %d: ", i + 1);
            scanf("%d", &b[i]);
            if (b[i] < 0 || b[i] > a[i])
            printf("Nhap lai");
        }
        while (b[i] <= 0 || b[i] > a[i]);
    }
}

void NhapNgay(int t)
{
    do
    {   
        printf("Nhap so ngay: ");
        scanf("%d", &t);
        if (t < 0)
        printf("Nhap lai");
    }  
    while (t < 0);
}

int TongMang(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		tong += a[i];
	return tong;
}

int min(int a, int b)
{
	if (a < b) 
	return a;
	return b;
}

void CapNhat(int a[], int b[], int n)
{
	for(int i = 0; i < n; i++)
		a[i] = a[i] - min(a[i], b[i]);
}

void TinhTongNuoc(int a[], int b[], int n, int t)
{
	for(int i = 0; i <= t; i++)
	{
		printf("Ngay thu %d: %d\n", i, TongMang(a, n));
		CapNhat(a, b, n);
	}
}

int main()
{
    int N;
    int a[max];
    int b[max];
    int t;
    SoLuongHoNuoc(N);
    LuongNuocBanDau(a, N);
    LuongNuocBocHoi(a, b, N);
    NhapNgay(t);
    TinhTongNuoc(a, b, N, t);
    
}
