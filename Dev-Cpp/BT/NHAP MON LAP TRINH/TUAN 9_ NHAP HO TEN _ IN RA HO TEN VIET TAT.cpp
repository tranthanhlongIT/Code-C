/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char Chuoi[30];
    printf("Vui long nhap Ho Ten: ");
    gets(Chuoi);
    
   	int n = strlen(Chuoi);
	printf("In ra Ho Ten viet tat: ");
	printf("%c", Chuoi[0]);
    for (int i = 1; i < n; i++)
    {
    	if (Chuoi[i] == ' ')
    		printf("%c", Chuoi[i+1]);
	}

	return 0;
}
