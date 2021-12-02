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
	char HoTen[30];
    printf("Vui long nhap vao ho ten: ");
    gets(HoTen);
   	int n = strlen(HoTen);
   	printf("In ra email: ");
   	int i;
   	char email[100];
    for (i = n - 1; i >= 0 ; i--)
        if (HoTen[i] == ' ')
        	break;
        	
    //strcpy(email, &HoTen[i+1]);
    //strcat(email, ".");
	printf("%s", &HoTen[i+1]);
	printf(".");
	
	//int k = n - i - 1;
	//email [k++] = '.';
	for (int j = 0; j < i; j++)
	{
		if (HoTen[j] != ' ')
		//email[k++] = HoTen[j];
		printf("%c", tolower(HoTen[j]));
	}
	printf("@hoasen.edu.vn");
	//email[k] = '\0';
    //puts(email);
    return 0;
}

