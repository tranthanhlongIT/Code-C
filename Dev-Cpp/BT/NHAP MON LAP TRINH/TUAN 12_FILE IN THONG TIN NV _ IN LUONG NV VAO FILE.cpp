/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define max 100

typedef struct ThongTin
{
	int MaNV[50];
	char HoTen[50];
	int LCB;
	float NgayCong;
	double TienLuong;
	double BHXH;
	double BHYT;
	double ThucLanh;
};

void DocFILE(ThongTin a[], int &n)
{
	FILE *f;
	f = fopen("D:\\Tools\\Dev-Cpp\\BT\\00\\ThongTin.txt", "r");
	if (f == NULL)
	{
		printf("Khong mo duoc file\n");
		return;
	}
	
	n = 0;
	while (!feof(f))
	{
		fscanf(f, "%d", &a[n].MaNV);
		fgetc(f);
		fgets(a[n].HoTen, 50, f);
		fscanf(f, "%d", &a[n].LCB);
		fscanf(f, "%f", &a[n].NgayCong);
		
		a[n].TienLuong = (a[n].LCB/22.0) * a[n].NgayCong;
		a[n].BHXH = a[n].TienLuong * 5 / 100.0;
		a[n].BHYT = a[n].TienLuong * 1 / 100.0;
		a[n].ThucLanh = a[n].TienLuong - a[n].BHXH - a[n].BHYT;
		n++;
	}
	fclose(f);
}


void Xuat1NV(ThongTin nv)
{
	printf("Ma NV: %d\t", nv.MaNV);
	printf("Ho Ten: %s", nv.HoTen);
	printf("Luong Co Ban: %d\t", nv.LCB);
	printf("Ngay Cong: %.1f\n", nv.NgayCong);
	printf("Tien Luong: %.1f\n", nv.TienLuong);
	printf("BHXH: %.1f\t", nv.BHXH);
	printf("BHYT: %.1f\t", nv.BHYT);
	printf("Thuc Lanh: %.1f\n", nv.ThucLanh);
}

void XuatMang(ThongTin a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("--------------------\n");
		printf("Nhan vien thu %d:\n", i+1);
		Xuat1NV(a[i]);
	}
}

void Ghi1NV(ThongTin nv, FILE *f)
{
	fprintf(f, "Ma NV: %d\t", nv.MaNV);
	fprintf(f, "Ho Ten: %s", nv.HoTen);
	fprintf(f, "Luong Co Ban: %d\t", nv.LCB);
	fprintf(f, "Ngay Cong: %f\n", nv.NgayCong);
	fprintf(f, "Tien Luong: %.1f\n", nv.TienLuong);
	fprintf(f, "BHXH: %.1f\t", nv.BHXH);
	fprintf(f, "BHYT: %.1f\t", nv.BHYT);
	fprintf(f, "Thuc Lanh: %.1f\n", nv.ThucLanh);
}



void GhiFILE(ThongTin a[], int n)
{
	FILE *f;
	f = fopen("D:\\Tools\\Dev-Cpp\\BT\\00\\Luong.txt", "w");
	for (int i = 0; i < n; i++)
	{
		Ghi1NV(a[i], f);
	}
}


int main()
{
	ThongTin a[max];
	int n;
	DocFILE(a, n);
	XuatMang(a, n);
	GhiFILE(a, n);
	
    return 0;
}

