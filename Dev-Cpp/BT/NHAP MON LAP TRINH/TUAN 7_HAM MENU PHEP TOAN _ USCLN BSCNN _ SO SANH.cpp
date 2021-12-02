/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void KiemTraSoNguyen(int &N);
int TongHaiSoNguyen(int &a, int &b);
int HieuHaiSoNguyen(int &a, int &b);
int ThuongHaiSoNguyen(int &a, int &b);
int TichHaiSoNguyen(int &a, int &b);
void TimSoLonHon(int a, int b);
int UocSoChungLonNhat(int &a, int &b);
int BoiSoChungNhoNhat(int &a, int &b);


int main()
{	
	int a, b;
	KiemTraSoNguyen(a);
	KiemTraSoNguyen(b);
	printf("Phep toan: %d + %d = %d\n", a, b, TongHaiSoNguyen(a, b));
	printf("Phep toan: %d - %d = %d\n", a, b, HieuHaiSoNguyen(a, b));
	printf("Phep toan: %d : %d = %d\n", a, b, ThuongHaiSoNguyen(a, b));
	printf("Phep toan: %d x %d = %d\n", a, b, TichHaiSoNguyen(a, b));
	printf("So sanh: ");
	TimSoLonHon(a, b);
	printf("USCLN cua %d va %d la: %d\n", a, b, UocSoChungLonNhat(a, b));
	printf("BSCNN cua %d va %d la: %d\n", a, b, BoiSoChungNhoNhat(a, b));
	return 0;
}

void KiemTraSoNguyen(int &N)
{    
    do
    {
        printf("Nhap N: ");
        scanf("%d", &N);
        if (N <= 0)
        printf("Nhap lai\n");
    }
    while (N <= 0);
}

int TongHaiSoNguyen(int &a, int &b)
{
	return a + b;
}

int HieuHaiSoNguyen(int &a, int &b)
{
	return a - b;
}

int ThuongHaiSoNguyen(int &a, int &b)
{
	return a / b;
}

int TichHaiSoNguyen(int &a, int &b)
{
	return a*b;
}

void TimSoLonHon(int a, int b)
{
	if (a > b)
		printf("%d > %d\n", a, b);
	else if (a < b)
		printf("%d < %d\n", a, b);
	else printf("Hai so bang nhau\n");
}

int UocSoChungLonNhat(int &a, int &b)
{
	int USCLN, i;
	for (i = 1; i <= a || i <= b; i++) 
    {
        if (a % i == 0 && b % i == 0)
        USCLN = i;
    }
	return USCLN;
}

int BoiSoChungNhoNhat(int &a, int &b)
{
	int m, o, BSCNN;
	if (a > b)
    m = o = a;
    else m = o = b;
    
    while(1)
    {
        if (m % a == 0 && m % b == 0) 
        {
        BSCNN = m;
        break;
        }
        m += o;
    }
	return BSCNN;
}



