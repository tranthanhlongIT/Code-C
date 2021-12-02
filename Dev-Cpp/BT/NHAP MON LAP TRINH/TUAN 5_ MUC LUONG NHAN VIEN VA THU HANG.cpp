/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int Luong;
	char ThuHang;
	printf("Nhap vao luong cua ban: ");
	scanf("%d", &Luong);
	fflush(stdin);
	printf("Nhap vao thu hang cua ban: ");
	ThuHang = getchar();
	
	if(ThuHang == 'A')
		Luong += 300;
	else if(ThuHang == 'B')
		Luong += 200;
	else if(ThuHang == 'C')
		Luong += 100;
	
	printf("Luong thuc lanh cua nhan vien: %d", Luong);
	return 0;
}
