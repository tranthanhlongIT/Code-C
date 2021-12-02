



#include <stdio.h>

int main()
{
    printf("Chao Ban!\n");
    printf("Chuc mung ban den voi mon hoc Ky Thuat Lap Trinh.\n");
    printf("  *\n");
    printf(" ***\n");
    printf("*****\n");
   
    int a, b;

    printf("Vui long nhap vao so nguyen duong 1: ");
    scanf("%d", &a);
    printf("Vui long nhap vao so nguyen duong 2: "); 
    scanf("%d", &b);
    printf("Tong cua 2 so nguyen duong la: %d+%d=%d\n", a,b,a+b);
    printf("Hieu cua 2 so nguyen duong la: %d-%d=%d\n", a,b,a-b);
    printf("Tich cua 2 so nguyen duong la: %d*%d=%d\n", a,b,a*b);
    printf("Tong binh phuong cua 2 so duoc nhap la: (%d+%d)*(%d+%d)=%d\n", a,b,a,b,(a+b)*(a+b));
    
    return 0;
}





