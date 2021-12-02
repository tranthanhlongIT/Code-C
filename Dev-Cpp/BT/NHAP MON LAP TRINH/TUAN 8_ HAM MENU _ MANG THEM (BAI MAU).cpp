#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define MAX 40
#define x -10
#define y 10

void themCuoi(int a[], int &n, int t);
void themDau(int a[], int &n, int t);
void themGiua(int a[], int &n, int t, int k);
void NhapSoLuongPT(int &n)
{
	do
	{
		printf("Vui long nhap vao so luong phan tu can su dung: ");
		scanf("%d", &n);
	}while(n<1 || n>MAX);
}

void TaoMang(int a[], int n)
{
	srand(time(0)); //srand((unsigned int) time(NULL));
	for(int i=0; i<n; i++)
		a[i] = x + rand()%(y-x+1); //[x..y]
	printf("Tao mang thanh cong!!!\n");
}

//void XuatMang(int a[100], int n)
//void XuatMang(int a[MAX], int n)
void XuatMang(int a[], int n)
{
	printf("Cac gia tri trong mang: \n");
	
	for(int i=0; i<n; i++)
		printf("%5d", a[i]);
	
	printf("\n");
}

bool KtraSCP(int N) //SCP la so co can nguyen: 1, 4, 9, 16, 25, 36, ...
{
	float can = sqrt(N);
	if(can == (int)can) 
	return true;
	return false;
}


void xuatSCP(int a[], int n)
{
	printf("Cac so chinh phuong co trong mang: ");
	for(int i=0; i<n; i++)
		//Neu a[i] la SCP thi moi xuat ra man hinh
		if(KtraSCP(a[i])==true) printf("%5d", a[i]);
	
	printf("\n");
}

void demSCP(int a[], int n)
{
	int dem=0;
	for(int i=0; i<n; i++)
		//Neu a[i] la SCP thi moi xuat ra man hinh
		if(KtraSCP(a[i])==true) dem++;
	
	printf("Trong mang co %d SCP\n", dem);
}

void tongSCP(int a[], int n)
{
	long tong=0;
	for(int i=0; i<n; i++)
		//Neu a[i] la SCP thi moi xuat ra man hinh
		if(KtraSCP(a[i])==true) tong += a[i];
	
	printf("Tong cac SCP trong mang: %ld\n", tong);
}
void TBC_SCP(int a[], int n)
{
	int dem=0;
	long tong = 0;
	for(int i=0; i<n; i++)
		//Neu a[i] la SCP thi moi xuat ra man hinh
		if(KtraSCP(a[i])==true) 
		{
			dem++;
			tong += a[i];
		}
	
	printf("Trung binh cong cac SCP trong mang: %.2f\n", (float)tong/dem);
}

void Menu()
{
	printf("0. Thoat\n");
	printf("1. Tao Mang\n");
	printf("2. Xuat Mang\n");
	printf("3. Xuat SCP\n");
	printf("4. Dem SCP\n");
	printf("5. Tong SCP\n");
	printf("6. Trung binh cong SCP\n");
	printf("7. Them cuoi\n");
	printf("8. Them dau\n");
	printf("9. Them giua\n");
}

void ThucHien(int a[], int n)
{
	int chon;
	do
	{
		Menu();
		printf("Vui long chon chuc nang can thuc hien: ");
		scanf("%d", &chon);
		switch(chon)
		{
			case 0: return;
			case 1: TaoMang(a, n); break;
			case 2: XuatMang(a, n); break;
			case 3: xuatSCP(a, n); break;
			case 4: demSCP(a, n); break;
			case 5: tongSCP(a, n); break;
			case 6: TBC_SCP(a, n); break;
			case 7: 
				int t;
				printf("Nhap vao gia tri can them: ");
				scanf("%d", &t);
				themCuoi(a, n, t);
				break;
			case 8: 
				printf("Nhap vao gia tri can them: ");
				scanf("%d", &t);
				themDau(a, n, t);
				break;
			case 9: 
				printf("Nhap vao gia tri can them: ");
				scanf("%d", &t);
				int k;
				printf("Nhap vao vi tri can them: ");
				scanf("%d", &k);
				k--;
				themGiua(a, n, t, k);
				break;
			default:
				printf("Chuong trinh chua thuc hien chuc nang %d\n", chon);
		}
		getch();
	}while(true);
}

bool KtraDAY(int n)
{
	return n==MAX;
}

void themCuoi(int a[], int &n, int t)
{
	if(KtraDAY(n)) 
	{
		printf("Mang DAY!!! KHONG them duoc!!!\n");
		return;
	}
	a[n] = t;
	n++;
	printf("Them CUOI thanh cong!!!\n");
	XuatMang(a, n);
}

void themDau(int a[], int &n, int t)
{
	if(KtraDAY(n)) 
	{
		printf("Mang DAY!!! KHONG them duoc!!!\n");
		return;
	}
	
	for(int i=n-1; i>=0; i--)
	{
		a[i+1] = a[i];
	}
	
	a[0] = t;
	n++;
	printf("Them DAU thanh cong!!!\n");
	XuatMang(a, n);
}

void themGiua(int a[], int &n, int t, int k)
{
	if(KtraDAY(n)) 
	{
		printf("Mang DAY!!! KHONG them duoc!!!\n");
		return;
	}
	
	for(int i=n-1; i>=k; i--)
	{
		a[i+1] = a[i];
	}
	
	a[k] = t;
	n++;
	printf("Them vao vi tri %d thanh cong!!!\n", k);
	XuatMang(a, n);
}


void xoaCuoi(int a[], int &n)
{
	int i;
	for (i < n - 1; i >= 0; i--)
	n--;
}

int main()
{
	int a[MAX];
	int n;
	NhapSoLuongPT(n);
	ThucHien(a, n);
}

