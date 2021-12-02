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
    printf("Vui long nhap vao mot chuoi: ");
    gets(Chuoi);
    
   	int n = strlen(Chuoi);
   	int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0;
    for (int i = 0; i < n; i++)
    {
        if(isalpha(Chuoi[i]))
        {	
        	dem1++;
		}
		else if(isdigit(Chuoi[i]))
		{
			dem2++;
		}
		else if(Chuoi[i] == ' ')
		{
			dem3++;
		}
		else
		{	
			dem4++;
		}
    }
    printf("So Ky tu la: %d\n", dem1);
    printf("So Chu so la: %d\n", dem2);
    printf("So Khoang trang la: %d\n", dem3);
    printf("So Ky tu khac la: %d\n", dem4);
    return 0;
}

