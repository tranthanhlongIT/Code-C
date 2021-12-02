#include <stdio.h>
int main()
{
	int d, m, y, a, b, z, x;
	printf("Nhap NGAY: ");
	scanf("%d", &d);
	
	if(d>=1 && d<= 31)
	{
		printf("Nhap THANG: ");
		scanf("%d", &m);
		if(m>=1 &&  m<=12)
		{
			printf("Nhap NAM: ");
			scanf("%d", &y);
			if(y>0)
			{ 
				switch(m)
				{
					case 1: 
					case 3: 
					case 5: 
					case 7: 
					case 8:
					case 10: 
					case 12:
						printf("HOP LE\n");
						break;
					case 4: 
					case 6: 
					case 9:
					 case 11:
						if(d<=30)
							printf("HOP LE\n");
						else
							printf("KHONG Hop le\n");
						break;
					case 2:
						if(d<=28) printf("HOP LE\n");
						else if(d>=30) printf("KHONG Hop le\n");
						else
							if((y%4 == 0 && y%100!= 0) || y%400 == 0) 
								printf("HOP LE\n");
							else 
								printf("KHONG Hop le\n");
				}
			}
			else printf("NAM sai\n");
		}
		else printf("THANG sai\n");
	}
	else
		printf("NGAY sai\n");
	
	x = (d + m * 2 + (m + 1) * 3 / 5 + y + y / 4) % 7;			// Bai B //
	if (x == 0)
	printf("Chu Nhat\n");
	if (x == 1)
	printf("Thu Hai\n");
	if (x == 2)
	printf("Thu Ba\n");
	if (x == 3)
	printf("Thu Tu\n");
	if (x == 4)
	printf("Thu Nam\n");
	if (x == 5)
	printf("Thu Sau\n");
	if (x == 6)
	printf("Thu Bay\n");
	
	
	int SoNgay = d;                               // Bai C //
	int TongNgay = 365;
	bool nhuan = false;
	
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		TongNgay ++;
		nhuan = true;
	}
	
	switch(m-1)
	{
		case 11: SoNgay += 30;
		case 10: SoNgay += 31;
		case 9: SoNgay += 30;
		case 8: SoNgay += 31;
		case 7: SoNgay += 31;
		case 6: SoNgay += 30;
		case 5: SoNgay += 31;
		case 4: SoNgay += 30;
		case 3: SoNgay += 31;
		case 2: if(nhuan) SoNgay += 29;
				else SoNgay += 28;
		case 1: SoNgay += 31;
	}				
	
	printf("Day la ngay thu %d / %d\n", SoNgay, TongNgay);
	

	switch(m)           												  // Bai D //
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
		if ((d + 1) > 0 && (d + 1) <= 31)
		{
		d = d + 1;
		printf("Tang ngay vua nhap len 1 ngay: %d / %d / %d\n", d, m, y);
		}
		else if ((d + 1) > 31)
		{
		d = 1;
		m = m + 1;
		printf("Tang ngay vua nhap len 1 ngay: %d / %d / %d\n", d, m, y);
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if ((d + 1) > 0 && (d + 1) <= 30)
		{
		d = d + 1;
		printf("Tang ngay vua nhap len 1 ngay: %d / %d / %d\n", d, m, y);
		}
		else if ((d + 1) > 30)
		{
		d = 1;
		m = m + 1;
		printf("Tang ngay vua nhap len 1 ngay: %d / %d / %d\n", d, m, y);
		}
		break;
	case 2:
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		{
		if ((d + 1) > 0 && (d + 1) <= 29)
		{
		d = d + 1;
		printf("Tang ngay vua nhap len 1 ngay: %d / %d / %d\n", d, m, y);
		}
		else if ((d + 1) > 29)
		{
		d = 1;
		m = m + 1;
		printf("Tang ngay vua nhap len 1 ngay: %d / %d / %d\n", d, m, y);
		}
		break;
		}
		if ((d + 1) > 0 && (d + 1) <= 28)
		{
		d = d + 1;
		printf("Tang ngay vua nhap len 1 ngay: %d / %d / %d\n", d, m, y);
		}	
		else if ((d + 1) > 28)
		{
		d = 1;
		m = m + 1;
		printf("Tang ngay vua nhap len 1 ngay: %d / %d / %d\n", d, m, y);
		}	
		break;
	case 12:
		if ((d + 1) > 0 && (d + 1) <= 31)
		{
		d = d + 1;
		printf("Tang ngay vua nhap len 1 ngay: %d / %d / %d\n", d, m, y);
		}
		else if ((d + 1) > 31)
		{
		d = 1;
		m = 1;
		y = y + 1;
		printf("Tang ngay vua nhap len 1 ngay: %d / %d / %d\n", d, m, y);
		}
		break;
	}	
	
	return 0;
	


}
