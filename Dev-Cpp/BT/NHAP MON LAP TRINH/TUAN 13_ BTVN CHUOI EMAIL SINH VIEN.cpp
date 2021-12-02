/******************************************************************************

                            Online C Compiler.														/// BAI CHUA HOAN THIEN ///
                Code, Compile, Run and Debug C program online.										/// TRAN THANH LONG ///
Write your code in this editor and press "Run" button to compile and execute it.					/// MSSV: 2199121  ///

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char HoTen[50];
	char MSSV[50];
	
	
	printf("Vui long nhap ten sinh vien: ");
	scanf("%s", &HoTen);
	
	printf("Vui long nhap ma so sinh vien: ");
	gets(MSSV);
	
	int n = strlen(HoTen);
	int i;
	
	for (i = n - 1; i >= 0; i--)
	{
		if (HoTen[i] == ' ')
		{
			break;
		}
	}
	printf("%s", strlwr(&HoTen[i+1]));
	printf(".");
	printf("%c", tolower(HoTen[0]));
	for (int j = 0; j < i; j++)
	{
		if (HoTen[j] == ' ')
		{
			printf("%c", tolower(HoTen[j+1]));
		}
	}
	
	int m = strlen(MSSV);
	
	for (i = 3; i < m; i++)
	{
		printf("%c", MSSV[i]);
	}
	
	printf("@sinhvien.hoasen.edu.vn");
	
	
	
}
