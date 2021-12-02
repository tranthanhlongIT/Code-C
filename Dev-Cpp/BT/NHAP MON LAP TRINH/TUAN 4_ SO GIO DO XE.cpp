/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double a, b;
    printf("Nhap vao so gio do xe: ");
    scanf("%lf", &a);
    if (a > 0 && a <= 24)
    {
        if (a <= 3)
			b = 2;
        if (a > 3 && a < 24)
        	b = 2 + (a - 3) * 0.5;
        else if (a == 24)
			b = 10;
		printf("So tien do xe la: %.0lf", b);
	}
    else printf("Vui long nhap lai");
    

    return 0;
}
