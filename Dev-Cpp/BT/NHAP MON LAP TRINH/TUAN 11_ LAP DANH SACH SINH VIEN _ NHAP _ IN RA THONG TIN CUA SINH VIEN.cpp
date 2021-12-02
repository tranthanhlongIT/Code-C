/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define max 100
#include <string.h>


typedef struct SinhVien
{
	char MSSV[10];
	char HoTen[50];
	float DiemNMLT;
	float DiemAV;
	float DiemTB;
	char XepLoai[15];
};


void NhapDanhSachSinhVien(int &n)
{
	do
	{
		printf("Vui long nhap danh sach sinh vien: ");
		scanf("%d", &n);
		if (n <= 0 || n > max)
		printf("Vui long nhap lai");
	}
	while (n <= 0 || n > max);
}

void XetXepLoai(SinhVien &s)
{
	if (s.DiemTB < 3.5)
		strcpy(s.XepLoai, "Kem");
	else if (s.DiemTB < 5)
		strcpy(s.XepLoai, "Yeu");
	else if (s.DiemTB < 6.5)
		strcpy(s.XepLoai, "Trung Binh");
		else if(s.DiemTB < 8)
		strcpy(s.XepLoai, "Kha");
	else if(s.DiemTB < 9)
		strcpy(s.XepLoai, "Gioi");
	else strcpy(s.XepLoai, "Xuat Sac");
}

void Nhap1SV(SinhVien &s)
{
	fflush(stdin);
	printf("Nhap MSSV: ");
	gets(s.MSSV);
	printf("Nhap Ho Ten: ");
	gets(s.HoTen);
	printf("Nhap Diem NMLT: ");
	scanf("%f", &s.DiemNMLT);
	printf("Nhap Diem AV: ");
	scanf("%f", &s.DiemAV);
	s.DiemTB = (s.DiemNMLT + s.DiemAV) / 2.0;
	XetXepLoai(s);
}

void Xuat1SV(SinhVien &s)
{
	printf("MSSV: %s", s.MSSV);
	printf("\t- Ho Ten: %s", s.HoTen);
	printf("\nNMLT: %f", s.DiemNMLT);
	printf("\t- AV: %f\n", s.DiemAV);
	printf("Diem TB: %f", s.DiemTB);
	printf("\t- Xep Loai: %s\n", s.XepLoai);
}


void LapDanhSachSV(SinhVien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap thong tin Sinh Vien thu %d: \n", i+1);
		Nhap1SV(a[i]);
		printf("\n");
	}
}

void XuatDanhSachSV(SinhVien a[], int n)
{
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("In ra thong tin Sinh Vien thu %d: \n", i+1);
		Xuat1SV(a[i]);
		printf("\n");
	}
}

void NhapMSSV(SinhVien &ms)
{
	printf("Nhap MSSV cua sinh vien can tim: ");
	gets(ms.MSSV);
	fflush(stdin);
}

void TimSV(SinhVien a[], int n, char ms[])
{	
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i].MSSV, ms) == 0)
		{
			printf("Thong tin SV tim thay: \n");
			Xuat1SV(a[i]);
		}
		else printf("Khong tim thay SV\n");
	}
}

void XuatTheoXepLoai(SinhVien a[], int n)
{
	int check = 0;
	char xl[15];
	printf("Vui long nhap vao xep loai muon xuat: ");
	gets(xl);
	for (int i = 0; i < n; i++)
	{	
		if (strcmp(a[i].XepLoai, xl) == 0)
		{
			Xuat1SV(a[i]);
			check++;
		}
		if (check != 1)
			printf("Khong tim thay xep loai muon tim\n");
	}
}

int main()
{	
	SinhVien a[max];
	int n;
	NhapDanhSachSinhVien(n);
	LapDanhSachSV(a, n);
	XuatDanhSachSV(a, n);
	
	printf("\n");
	char ms[8];
	fflush(stdin);
	printf("Vui long nhap vao MSSV can tim: ");
	gets(ms);
	TimSV(a, n, ms);
	
	printf("\n");
	XuatTheoXepLoai(a, n);
    return 0;
}

