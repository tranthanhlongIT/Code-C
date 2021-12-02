/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>
#define max 100

int N = 0;

typedef struct ThongTin
{
    char HoTen[50];
    char ChucVu[50];
    int Luong;
};


int Menu(int &choice);
void ThucHien(ThongTin a[], int choice, char Name[20]);
void ThemNhanVien(ThongTin a[]);
void InThongTinTungNhanVien(ThongTin a[]);
int LuongTruongPhong(ThongTin a[], int Tong1);
int LuongNhanVien(ThongTin a[], int Tong2);
int TongLuong(ThongTin a[], int Tong3);
int ThongKeLuongTheoChucVu(ThongTin a[]);
void xoa(char Name[20]);
void xoakt(char *Name);
//void TimNhanVienTheoTen(ThongTin a[], char Name[20]);




int main()
{
	int choice;
	ThongTin a[max];
	char *Name;
	ThucHien(a, choice, Name);	
}


int Menu(int &choice)
{
	printf("--------------Menu--------------\n");
	printf("1. Them Nhan Vien\n");
	printf("2. In Danh Sach Nhan Vien\n");
	printf("3. In Luong Thong Ke Theo Chuc Vu\n");
	printf("4. Tim Nhan Vien Theo Ten\n");
	printf("0. Thoat\n");
	printf("--------------------------------\n");
	printf("Chon chuc nang: ");
	scanf("%d", &choice);
	printf("\n");
	
}

void ThucHien(ThongTin a[], int choice, char Name[50])
{
	do
	{	
		system("CLS");
		Menu(choice);
		switch (choice)
		{
			case 1: ThemNhanVien(a);
					break;
			case 2: InThongTinTungNhanVien(a); 
					break;
			case 3: ThongKeLuongTheoChucVu(a);
					break;
			//case 4:	TimNhanVienTheoTen(a, Name);
					break;
			case 0: break;
			default: printf("Chon sai chuc nang!");
					break;
		}
		getch();
	}
	while (choice != 0);
}


void ThemNhanVien(ThongTin a[])
{
	printf("\n");
	fflush(stdin);
	printf("Thong Tin Nhan Vien:\n");
    printf("Nhap Ho va Ten: ");
    gets(a[N].HoTen);
    printf("Nhap Chuc vu: ");
    gets(a[N].ChucVu);
    fflush(stdin);
	printf("Nhap Muc Luong: ");
	scanf("%d", &a[N].Luong);
	N++;
}

void InThongTinTungNhanVien(ThongTin a[])								
{
	printf("\n");
	printf("Ho va Ten \t\t//");
	printf("\t\t Chuc Vu \t\t//");
	printf("\t\t (Luong USD)\n");
	printf("--------------------------------------------------------------------------------------------\n");
	
	for (int i = 0; i < N; i++)
	{
		printf("%-40s", a[i].HoTen);
		printf("%-40s", a[i].ChucVu);
		printf("%d", a[i].Luong);
		printf("\n");
	}
}

int LuongTruongPhong(ThongTin a[], int Tong1)
{
	Tong1 = 0;
	char temp1[50] = "Truong phong";
	char *d;
	for (int i = 0; i < N; i++)
	{
		d = strlwr(a[i].ChucVu);
		if (strcmp(temp1,d) == 0)
		{
			Tong1 += a[i].Luong;
		}
	}
	return Tong1;	
}

int LuongNhanVien(ThongTin a[], int Tong2)
{
	Tong2 = 0;
	char temp2[50] = "nhan vien";
	char *s;
	
	for (int i = 0; i < N; i++)
	{
		s = strlwr(a[i].ChucVu);
		if (strcmp(temp2,s) == 0)
		{
			Tong2 += a[i].Luong;
		}
	}
	return Tong2;	
}

int TongLuong(ThongTin a[], int Tong3)
{
	Tong3 = 0;
	for (int i = 0; i < N; i++)
	{
		Tong3 += a[i].Luong;
	}
	return Tong3;
}


int ThongKeLuongTheoChucVu(ThongTin a[])
{
	int Tong1, Tong2, Tong3;
	printf("\n");
	printf("Thong Ke Luong Theo Chuc Vu: \n");
	printf("Chuc Vu\t\t");
	printf("Luong\n");
	printf("-------------------------------\n");
	
	printf("Truong Phong: %5d\n", LuongTruongPhong(a, Tong1));
	printf("Nhan Vien: %8d\n", LuongNhanVien(a, Tong2));
	
	printf("-------------------------------\n");
	
	printf("Tong Cong: %8d", TongLuong(a, Tong3));
}

/*void TimNhanVienTheoTen(ThongTin a[], char Name[20])
{
	printf("\n");
	printf("---------------\n");
	
	fflush(stdin);

	printf("Nhap Ten Nhan Vien Can Tim: ");
	gets(Name);
	xoa(Name);
	xoakt(Name);
	
}*/




