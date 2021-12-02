/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void KiemTraSoNguyen(int &n);
bool KiemTraPhepToan(int x, int y);

int main()
{	
	int x, y;
    KiemTraSoNguyen(x);
    KiemTraSoNguyen(y);
    if (KiemTraPhepToan(x, y))
    printf("%d chia het cho %d!", x, y);
    else printf("%d khong chia het cho %d!", x, y);
    return 0;
}

void KiemTraSoNguyen(int &n)
{
    do
    {   
        printf("Nhap So Nguyen: ");
        scanf("%d", &n);
        if (n <= 0)
        printf("Nhap lai\n");
    }
    while (n <= 0);
}

bool KiemTraPhepToan(int x, int y)
{
	if (x % y == 0)
	return true;
	return false;
}






