/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void NhapSoDanhSachSV(int &n);
void NhapTenDanhSachSV(char name[][50], int n);
void InDanhSachSV(char name[][50], int n);
void TimSinhVien(char name1[50], int n);
void InRaViTri(char name[][50], char name1[50], int n, int m);
void Hoanvi(char s1[], char s2[]);
void SapXep(char name[][50], int n);
void InRaDanhSachTangDan(char name[][50], int n);

int main()
{
	char name[100][50];
	int n;
	int m;
	char name1[50];
	NhapSoDanhSachSV(n);
	NhapTenDanhSachSV(name, n);
	InDanhSachSV(name, n);
	TimSinhVien(name1, n);
	InRaViTri(name, name1, n, m);
	SapXep(name, n);   
	InRaDanhSachTangDan(name, n);
}

void NhapSoDanhSachSV(int &n)                                 //  CAU A  //
{
	do
	{
		printf("So danh sach Sinh vien: ");
		scanf("%d", &n);
		if (n > 100 || n <= 0)
		printf("Nhap lai");
	}
	while (n > 100 || n <= 0);
}

void NhapTenDanhSachSV(char name[][50], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap ten sinh vien: ");
		fflush(stdin);
		gets(name[i]);
	}
}

void InDanhSachSV(char name[][50], int n)                     // CAU B  //
{
	printf("Danh sach sinh vien: \n");
	for (int i = 0; i < n; i++)
	{
		printf("\t%s\n", name[i]);
	}
}

void TimSinhVien(char name1[50], int n)                    //  CAU C  //
{
	printf("Nhap ten sinh vien can tim: ");
	gets(name1);
	fflush(stdin);
}

void InRaViTri(char name[][50], char name1[50], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		int m = strcmp(name[i],name1);
		if ( m == 0 )
		printf("Sinh vien %s o vi tri %d trong danh sach", name[i], i+1);
	}
}

void Hoanvi(char s1[], char s2[])				//  CAU D  //
{
	char tmp[20];
	strcpy(tmp, s1);
	strcpy(s1, s2);
	strcpy(s2, tmp);
}

void SapXep(char name[][50], int n)                 
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(name[i], name[j]) > 0)
			{
			Hoanvi(name[i], name[j]);
			}
		}
	}
}

void InRaDanhSachTangDan(char name[][50], int n)
{	
	printf("\nIn ra danh sach Sinh Vien theo thu tu tang dan: ");													/// IN RA THEO THU TU   ///
	for(int i = 0; i < n; i++)
    {
        printf("%s\t", name[i]);
    }
}
