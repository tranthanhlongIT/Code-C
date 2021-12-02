/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.									/// TEN: TRAN THANH LONG ///
Write your code in this editor and press "Run" button to compile and execute it.				/// MSSV: 2199121 ///

*******************************************************************************/

#include <stdio.h>

void NhapKhoiLuong(float &W)
{
	do
	{
		printf("Nhap Khoi Luong Cua Ban (KG): ");
		scanf("%f", &W);
		if (W < 0)
		printf("Vui long nhap lai");
	}
	while (W < 0);
}

void NhapChieuCao(float &H)
{
	fflush(stdin);
	do
	{
		printf("Nhap Chieu Cao Cua Ban (m): ");
		scanf("%f", &H);
		if (H < 0)
		printf("Vui long nhap lai");
	}
	while (H < 0);
}

void TinhBMI(float &BMI, float W, float H)
{
	BMI = 0;
	BMI = W / (H * H * 1.0);
	printf("BMI Cua Ban La: %.2f\n", BMI);
}

void KiemTraBMI(float BMI)
{
	if (BMI < 18)
		printf("Ban la nguoi gay\n");
	else if (BMI <= 25)
		printf("Ban la nguoi binh thuong\n");
	else if (BMI <= 30)
		printf("Ban la nguoi beo phi cap do I\n");
	else if (BMI <= 40)
		printf("Ban la nguoi beo phi cap do II\n");
	else printf("Ban la nguoi beo phi cap do III\n");
}

int main()
{
	float W, H, BMI;
	NhapKhoiLuong(W);
	NhapChieuCao(H);
	TinhBMI(BMI, W, H);
	KiemTraBMI(BMI);
}
