/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.										/// TRAN THANH LONG ///
Write your code in this editor and press "Run" button to compile and execute it.					/// MSSV: 2199121 ///

*******************************************************************************/

#include <conio.h>
#include <stdio.h>
#include <windows.h>

int Menu(int &choice);
int ThucHien(int choice, int H, int N, char c);
void NhapChieuCaoVaKyTuVe(int &H, char &c);
void NhapChieuCao(int &H);
void NhapKyTuVe(char &c);
void VeHinhTamGiacVuongDac(int H, char c);
void VeHinhTamGiacVuongRong(int H, char c);
void NhapChieuNgang(int &N);
void VeHinhChuNhatDac(int H, int N, char c);
void VeHinhChuNhatRong(int H, int N, char c);
void VeHinhTamGiacCanDac(int H, char c);
void VeHinhTamGiacCanRong(int H, char c);


int Menu(int &choice)
{
	printf("----------Menu----------\n");
	printf("1. Nhap chieu cao va ky tu ve\n");
	printf("2. Ve hinh tam giac vuong dac\n");
	printf("3. Ve hinh tam giac vuong rong\n");
	printf("4. Ve hinh chu nhat dac\n");
	printf("5. Ve hinh chu nhat rong\n");
	printf("6. Ve hinh tam giac can dac\n");
	printf("7. Ve hinh tam giac can rong\n");
	printf("0. Thoat\n");
	printf("------------------------\n");
	printf("Vui long chon chuc nang: ");
	scanf("%d", &choice);
	printf("\n");
}

int ThucHien(int choice, int H, int N, char c)
{
	do
	{
		system("CLS");
		Menu(choice);
		switch(choice)
		{
			case 1: NhapChieuCaoVaKyTuVe(H, c);
					break;
			case 2: VeHinhTamGiacVuongDac(H, c);
					break;
			case 3: VeHinhTamGiacVuongRong(H, c);
					break;
			case 4: VeHinhChuNhatDac(H, N, c);
					break;
			case 5: VeHinhChuNhatRong(H, N, c);
					break;
			case 6: VeHinhTamGiacCanDac(H, c);
					break;
			case 7: VeHinhTamGiacCanRong(H, c);
					break;
			case 0: break;
			default: printf("Khong co chuc nang nay");
		}
		getch();
	}
	while (choice != 0);
}

void NhapChieuCaoVaKyTuVe(int &H, char &c)
{
	NhapChieuCao(H);
	NhapKyTuVe(c);
}

void NhapChieuCao(int &H)
{
	do
	{
		printf("Vui long nhap chieu cao: ");
		scanf("%d", &H);
		if (H < 0)
		printf("Vui long nhap lai\n");
	}
	while (H < 0);
}

void NhapKyTuVe(char &c)
{
	fflush(stdin);
	printf("Vui long nhap ky tu ve: ");
	c = getchar();
}

void VeHinhTamGiacVuongDac(int H, char c)
{
	for (int i = 1; i <= H; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
}

void VeHinhTamGiacVuongRong(int H, char c)
{
	printf("%c\n", c);
	for (int i = 2; i < H; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (j == 1 || j == i)
			{
				printf("%c", c);
			}		
			else printf(" ");
		}
		printf("%c", c);
		printf("\n");
	}
	
	for (int i = 0; i < H; i ++)
	{
		printf("%c", c);
	}
	
}

void NhapChieuNgang(int &N)
{
	do
	{
		printf("Vui long nhap chieu ngang: ");
		scanf("%d", &N);
		if (N < 0)
		printf("Vui long nhap lai");
	}
	while (N < 0);
}

void VeHinhChuNhatDac(int H, int N, char c)
{
	NhapChieuNgang(N);
	printf("\n");
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
}

void VeHinhChuNhatRong(int H, int N, char c)
{
	NhapChieuNgang(N);
	printf("\n");
	
	for (int i = 0; i < N; i++)
	{
		printf("%c", c);
	}
	printf("\n");
	
	for (int i = 2; i < H; i++)
	{
		for (int j = 1; j < N; j++)
		{
			if (j == 1 || j == N)
			{
			printf("%c", c);
			}
			else printf(" ");
		}
		printf("%c", c);
		printf("\n");
	}
	
	for (int i = 0; i < N; i++)
	{
		printf("%c", c);
	}
	
}

void VeHinhTamGiacCanDac(int H, char c)
{
	for (int i = 1; i <= H; i++)
	{
		for (int j = 1; j <= H - i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
}


void VeHinhTamGiacCanRong(int H, char c)
{
	for (int i = 1; i <= H - 1; i++)
	{
		printf(" ");
	}
	printf("%c", c);
	printf("\n");
	
	for (int i = 2; i <= H - 1; i++)
	{
		for (int j = 1; j <= H - i; j++)
		{																	/// EM VAN KHONG HIEU ///
			printf(" ");
		}
		printf("%c", c);
		for (int j = 1; j <= 2 * i - 3; j++)
		{
			printf(" ");
		}
		printf("%c", c);
		printf("\n");
	}
	
	for (int i = 1; i <= 2 * H - 1; i++)
	printf("%c", c);
	
}

int main()
{
	int choice;
	int H;
	int N;
	char c;
	ThucHien(choice, H, N, c);
}






