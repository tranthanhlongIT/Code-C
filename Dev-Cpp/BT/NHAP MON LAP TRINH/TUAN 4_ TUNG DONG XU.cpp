/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define sap 1
#define ngua 0

int main()
{
    int a, b, c;
    printf("Mat xu ban A la: ");
    scanf("%d", &a);
    printf("Mat xu ban B la: ");
    scanf("%d", &b);
    printf("Mat xu ban C la: ");
    scanf("%d", &c);
    
    if (a == 1 && b == 1 && c == 1 || a == 0 && b == 0 && c == 0)
    printf("Hoa nhau");
    else if (a == 1 && b == 0 && c == 0 || a == 0 && b == 1 && c == 1)
    printf("A thang");
    else if (a == 1 && b == 1 && c == 0 || a == 0 && b == 0 && c == 1)
    printf("C thang");
    else if (a == 1 && b == 0 && c == 1 || a == 0 && b == 1 && c == 0)
    printf("B thang");
    else if (a != 1 || 0, b != 1 || 0, c != 1 || 0)
    printf("Nhap lai");
    
	return 0;
}
