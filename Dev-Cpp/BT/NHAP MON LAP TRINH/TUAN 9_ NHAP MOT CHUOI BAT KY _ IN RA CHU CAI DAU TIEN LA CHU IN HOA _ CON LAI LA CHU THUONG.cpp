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
	char Chuoi[50];
	printf("Nhap chuoi: ");
	gets(Chuoi);
	int n = strlen(Chuoi);
	printf("In ra: %c", toupper(Chuoi[0]));
	for (int i = 1; i < n; i++)
	{
		printf("%c", tolower(Chuoi[i]));
	}
	return 0;

}

