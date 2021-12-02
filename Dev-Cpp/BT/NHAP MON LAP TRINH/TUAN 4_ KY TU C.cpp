/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double a, b;
    char c;
    double tong, hieu, tich, thuong;
    printf("Nhap a, b: ");
    scanf("%lf%lf", &a, &b);
    fflush(stdin);
    printf("Nhap ky tu c: ");
    c = getchar();

    tong = a + b;
	hieu = a - b;
	tich = a*b;
	thuong = a/b;

	if(c == '+')
	printf("a + b = %.0lf", tong);
	else if(c == '-')
	printf("a - b = %.0lf", hieu);
	else if(c == 'x')
	printf("a x b = %.0lf", tich);
	else if(c == ':')
	printf("a : b = %.0lf", thuong);

	return 0;
}
