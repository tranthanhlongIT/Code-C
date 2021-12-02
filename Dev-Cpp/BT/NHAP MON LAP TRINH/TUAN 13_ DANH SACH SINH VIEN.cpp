/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.												/// TRAN THANH LONG ///
Write your code in this editor and press "Run" button to compile and execute it.							/// MSSV: 2199121 ///

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define max 100

int N = 0;

typedef struct SinhVien
{
	char Ten[50];
};

int Menu(int &choice);
void ThucHien(int choice, SinhVien a[], int M);
void NhapSoLuongSV(int &M);
void NhapDanhSachSV(SinhVien a[], int M);
void InDanhSach(SinhVien a[]);
void NhapTenSinhVienCanTim(char t[]);
void TimSinhVien(SinhVien a[], char t[]);
void SapXepTenSinhVienTangDan(SinhVien a[]);
void InRaDanhSachDaSapXep(SinhVien a[]);

int Menu(int &choice)
{
	printf("--------------Menu--------------\n");
	printf("1. Nhap danh sach sinh vien\n");
	printf("2. In danh sach sinh vien ra man hinh\n");
	printf("3. Tim sinh vien, neu tim thay in ra vi tri trong danh sach\n");
	printf("4. Sap xep va in ra danh sach sinh vien tang dan\n");
	printf("0. Thoat\n");
	printf("--------------------------------\n");
	printf("Vui long chon chuc nang: ");
	scanf("%d", &choice);
	printf("\n");
}

void ThucHien(int choice, SinhVien a[], int M, char t[])
{
	do
	{
		system("CLS");
		Menu(choice);
		switch(choice)
		{
			case 1: NhapDanhSachSV(a, M);
					break;
			case 2: InDanhSach(a);
					break;
			case 3: TimSinhVien(a, t);
					break;
			case 4: InRaDanhSachDaSapXep(a);
					break;
			case 0: break;
			default: printf("Khong co chuc nang nay");
		}
		getch();
	}
	while (choice != 0);
}

void NhapSoLuongSV(int &M)
{
	do
	{
		printf("Vui long nhap so luong sinh vien cho danh sach (hoac bo sung them cho danh sach): ");
		scanf("%d", &M);
		if (M < 0 || M > max)
		{
			printf("Vui long nhap lai\n");
		}
	}
	while (M < 0 || M > max);
}

void NhapDanhSachSV(SinhVien a[], int M)
{
	NhapSoLuongSV(M);
	while (N < M)
	{
		fflush(stdin);
		printf("Nhap ten sinh vien thu %d: ", N + 1);
		scanf("%s", &a[N].Ten);
		printf("\n");
		fflush(stdin);
		N++;
	}
}

void InDanhSach(SinhVien a[])
{	
	printf("\n");
	printf("In danh sach sinh vien ra man hinh:\n");
	printf("-----------------------------------\n");
	for (int i = 0; i < N; i++)
	{
		printf("Ten sinh vien thu %d: %s\n", i+1, a[i].Ten);
	}
}

Void NhapTenSinhVienCanTim(char t[])
{
	fflush(stdin);
	printf("Vui long nhap ten sinh vien can tim: ");
	gets(t);
}

void TimSinhVien(SinhVien a[], char t[])
{
	NhapTenSinhVienCanTim(t);
	for (int i = 0; i < N; i++)
	{
		if (strcmp(t,a[i].Ten) == 0)
		{
			printf("Tim thay sinh vien o vi tri thu %d trong danh sach", i+1);
		}
	}
}

void SapXepTenSinhVienTangDan(SinhVien a[])
{
	char H[50];
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (strcmp(a[i].Ten,a[j].Ten) > 0);
			{
				strcpy(H,a[i].Ten);
				strcpy(a[i].Ten,a[j].Ten);
				strcpy(a[j].Ten,H);	
			}
		}
	}
}

void InRaDanhSachDaSapXep(SinhVien a[])
{
	SapXepTenSinhVienTangDan(a);
	printf("Danh sach sinh vien sap xep theo ten tang dan: \n");
	printf("-----------------------------------------------\n");
	for (int i = 0; i < N; i++)
	{
		printf("%s", a[i].Ten);
		printf("\n");
	}
}

int main()
{
	SinhVien a[max];
	int choice;
	int M;
	char t[50];
	ThucHien(choice, a, M, t);
	
}
