/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 100

int main()
{
	char HoTen[50];
	char MA[7];										
	printf("Nhap Ho Ten: ");
	gets(HoTen);
	int n = strlen(HoTen);
	printf("Nhap MSSV: ");
	gets(MA);

	int i;
    for (i = n - 1; i >= 0 ; i--)
    {
        if (HoTen[i] == ' ')
        {
			break;
		}
	}	

	printf("%s", &HoTen[i+1]);
	printf(".");
	printf("%c", tolower(HoTen[0]));
	for (int j = 1; j < i; j++)
	{
		if (HoTen[j] == ' ')
		printf("%c", tolower(HoTen[j+1]));
	}
	printf("%s", &MA[3]);
	printf("@sinhvien.hoasen.edu.vn"); 
	return 0;	 
        	
}

