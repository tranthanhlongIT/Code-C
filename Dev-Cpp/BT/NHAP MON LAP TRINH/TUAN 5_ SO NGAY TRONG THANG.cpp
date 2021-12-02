#include <stdio.h>
int main()
{
	int m, y;
	printf("Nhap thang: ");
	scanf("%d", &m);
	
	switch(m)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31 Ngay\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("30 Ngay\n");
			break;
		case 2:
			printf("Nhap nam: ");
			scanf("%d", &y);
			//Nam chia het cho 4 ma khong chia het cho 100 HOAC chia het cho 400
			if((y%4 == 0 && y%100!= 0) || y%400 == 0) 
				printf("29 Ngay\n");
			else 
				printf("28 Ngay\n");
			break;
		default:
			printf("Thang khong ton tai\n");
	}
}
