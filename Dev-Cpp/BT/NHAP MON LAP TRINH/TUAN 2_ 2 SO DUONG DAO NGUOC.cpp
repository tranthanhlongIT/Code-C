


#include <stdio.h>

int main()
{	
    int c;
    printf("Vui long nhap vao so duong co hai chu so:  ");
    scanf_s("%d", &c);
    
    int chuc = c%10;
    int dv = c/10;
    int dn = chuc*10 + dv;
    
    printf("So dao nguoc cua %d la: %d\n", c, dn);
    
	return 0;
}
