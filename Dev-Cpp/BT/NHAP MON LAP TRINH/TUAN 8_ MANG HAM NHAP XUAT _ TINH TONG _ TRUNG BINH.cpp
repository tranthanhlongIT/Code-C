/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100
void NhapSoPhanTu(int &N);
void NhapPhanTu(int a[], int N);
void XuatPhanTu(int a[], int N);
int TongCacPhanTu(int a[], int N);
int TrungBinhCacPhanTu(int a[], int N);


	
int main()
{
	int n;
	int a[max];
    NhapSoPhanTu(n);
    NhapPhanTu(a, n);
    XuatPhanTu(a, n);
    printf("\nGia tri tong cua cac phan tu: %d", TongCacPhanTu(a, n));
    printf("\nGia tri trung binh cua cac phan tu: %d", TrungBinhCacPhanTu(a, n));
}

void NhapSoPhanTu(int &N)
{
    do
    {
        printf("Nhap So phan tu: ");
        scanf("%d", &N);
        if (N <= 0 || N > max)
        printf("nhap lai");
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

void XuatPhanTu(int a[], int N)
{
    printf("Xuat cac phan tu vua nhap: ");
    for (int i = 0; i < N; i++)
    {
        printf("%3d", a[i]);
    }
}

int TongCacPhanTu(int a[], int N)
{   
    int tong = 0;
    for (int i = 0; i < N; i++)
	{
		tong += a[i];
	}	
    return tong;
}

int TrungBinhCacPhanTu(int a[], int N)
{
    int tong = 0;
    for (int i = 0; i < N; i++)
	{
		tong += a[i];
	}	
	return tong/N;
}

