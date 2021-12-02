/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
	char Chuoi[30];
    printf("Vui long nhap vao mot chuoi: ");
    gets(Chuoi);
   	int n = strlen(Chuoi);
   	printf("In ra chuoi dao nguoc: ");
    for (int i = n; i >= 0 ; i--)
    {
        printf("%c", Chuoi[i]);
    }
    return 0;
}

