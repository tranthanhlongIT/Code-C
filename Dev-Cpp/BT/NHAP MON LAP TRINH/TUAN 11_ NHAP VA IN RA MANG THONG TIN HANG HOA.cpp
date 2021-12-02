/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#define max 100

typedef struct Hang
{
    char MaHang[15];
    char TenHang[50];
    char DonVi[15];
    int SoLuong;
    float DonGia;
    float ThanhTien;
    float ChietKhau;
    float DoanhThu;
};

void NhapThongTinBanHang(Hang &s)                                       //// NHAP THONG TIN ////
{
	fflush(stdin);
    printf("Nhap Ma Hang: ");
    gets(s.MaHang);
    printf("Nhap Ten Hang: ");
    gets(s.TenHang);
    printf("Nhap Don Vi Tinh: ");
    gets(s.DonVi);
    printf("Nhap So Luong: ");
    scanf("%d", &s.SoLuong);
    printf("Nhap Don Gia Ban: ");
    scanf("%f", &s.DonGia);
    s.ThanhTien = s.SoLuong * s.DonGia;
    s.ChietKhau = 5/100.0 * s.ThanhTien;
    s.DoanhThu = s.ThanhTien - s.ChietKhau;
}

void InLietKeChiTietBanHang(Hang &s)                                   //// IN THONG TIN ////
{
	printf("Ma Hang: %s", s.MaHang);
	printf("\t\t- Ten Hang: %s\n", s.TenHang);
	printf("Don Vi Tinh: %s", s.DonVi);
	printf("\t\t- So Luong: %d", s.SoLuong);
	printf("\nDon Gia Ban: %.1f", s.DonGia);
	printf("\t- Thanh Tien: %.1f", s.ThanhTien);
	printf("\nChiet Khau: %.1f", s.ChietKhau);
	printf("\t\t- Doanh Thu: %.1f", s.DoanhThu);	
}
    
void NhapSoLuongCacMatHang(int &n)                                                    //// NHAP THONG TIN MANG ////
{
	do
	{
		printf("Nhap So Luong Cac Mat Hang: ");
		scanf("%d", &n);
		if ( n <= 0 || n > 100)
		printf("Nhap lai");
	}
	while (n <= 0 || n > 100);
}

void NhapThongTinTungMatHang(Hang a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n");
		printf("--------------\n");
		printf("Thong tin mat hang thu %d:\n", i+1);
		NhapThongTinBanHang(a[i]);
	}
}

void InRaThongTinTungMatHang(Hang a[], int n)                                           //// IN THONG TIN MANG ////
{
	for (int i = 0; i < n; i++)
	{
		printf("\n");
		printf("\n");
		printf("--------------\n");
		printf("In ra chi tiet mat hang thu %d:\n", i+1);
		InLietKeChiTietBanHang(a[i]);	
	}
}

void SoLuongBanLonNhat(Hang a[], int n, int z)											/// 2 MAT HANG CO SO LUONG BAN LON NHAT ///
{
	char t[50];
    for (int i = 0; i < n; i++)
    {
        for (int j  = i + 1; j < n; j++)
        {
            if (a[i].SoLuong < a[j].SoLuong)
            {
                z = a[i].SoLuong;
                a[i].SoLuong = a[j].SoLuong;
                a[j].SoLuong = z;
                if(strcmp(a[i].TenHang,a[j].TenHang) != 0)
            	{
            		strcpy(t,a[i].TenHang);
            		strcpy(a[i].TenHang,a[j].TenHang);
            		strcpy(a[j].TenHang, t);
				}
            }    
        }
    }
}

void InRa2MatHangSoLuongLonNhat(Hang a[], int n)											//// IN RA 2 MAT HANG CO SO LUONG LON NHAT   ////
{
	printf("\n\n");
	printf("----------------------------------");
    printf("\n2 Mat Hang Co So Luong Lon Nhat La:   %s    %s", a[0].TenHang, a[1].TenHang);
    printf("\n");
}


void DoanhThuBanNhoNhat(Hang a[], int n, int d)
{
	char k[50];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].DoanhThu > a[j].DoanhThu)
			{
				d = a[i].DoanhThu;
				a[i].DoanhThu = a[j].DoanhThu;
				a[j].DoanhThu = d;
				if(strcmp(a[i].TenHang,a[j].TenHang) != 0)
				{
					strcpy(k, a[i].TenHang);
					strcpy(a[i].TenHang, a[j].TenHang);
					strcpy(a[j].TenHang, k);
				}
			}
		}
	}
}

void InRa2MatHangCoDoanhThuNhoNhat(Hang a[], int n)
{
	printf("\n\n");
	printf("----------------------------------");
    printf("\n2 Mat Hang Co Doanh Thu Nho Nhat La:   %s    %s", a[n-1].TenHang, a[n-2].TenHang);
    printf("\n");
}

void SepXepThuTuGiamDanTheoDoanhThuBanHang(Hang a[], int n, float z)        				//// IN RA THEO THU TU GIAM DAN ////
{

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].DoanhThu < a[j].DoanhThu)
			{
				z = a[i].DoanhThu;
				a[i].DoanhThu = a[j].DoanhThu;
				a[j].DoanhThu = z;
			}
		}
	}
}

void InRaTheoThuTuGiamDanDoanThuBanHang(Hang a[], int n)
{
	printf("\n");
	printf("\nSap Xep Doanh Thu Theo Thu Tu Giam Dan: ");
	for (int i = 0; i < n; i++)
	{
		printf("%.1f\t", a[i].DoanhThu);
	}
}


double TongDoanhThu(Hang a[], int n)                  //// LAP BANG THONG KE ////
{
	double Tong = 0.0;
	for (int i = 0; i < n; i++)
	{
		Tong += a[i].DoanhThu;
	}
	return Tong;
}

void LapBanThongKe(Hang a[], int n)                        
{
	printf("\n");
	printf("----------------------------------\n");
	
	printf("Ten Hang: \t");
	printf("Doanh Thu: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%s", a[i].TenHang);
		printf("\t\t%.1f\n", a[i].DoanhThu);
	}
	printf("Tong cong:\t");
	printf("%.1f", TongDoanhThu(a, n));
}

int main()
{
	Hang s;
	Hang a[max];
	int n;
	int z;
	int d;
	
	NhapSoLuongCacMatHang(n);
	
    NhapThongTinTungMatHang(a, n);
    InRaThongTinTungMatHang(a, n);
    
    SoLuongBanLonNhat(a, n, z);
    InRa2MatHangSoLuongLonNhat(a, n);
    
    DoanhThuBanNhoNhat(a, n, d);
    InRa2MatHangCoDoanhThuNhoNhat(a, n);
    
    LapBanThongKe(a, n);
    
    SepXepThuTuGiamDanTheoDoanhThuBanHang( a, n, z);
    InRaTheoThuTuGiamDanDoanThuBanHang(a, n);
    
    
    
	return 0;
}

