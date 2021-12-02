#include<stdio.h>
#define max 100


void NhapSoLuongPhanTu(int &n)
{
	do
	{
		printf("Nhap vao so phan tu can su dung: ");
		scanf("%d",&n);
	}while(n<1||n>100);
}

void NhapMang(int a[], int n)
{
	for (int i=0;i<n;i++)
	{
		printf("Nhap vao phan tu thu %d ",i+1);
		scanf("%d",&a[i]);
	}
}

void XuatMang(int a[], int n)
{
	printf("Mang co n so nguyen sau khi nhap la: \n");
	for (int i=0;i<n;i++)
	{
		printf("%8d",a[i]);
	}
}

bool KTraSHH(int n)
{
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	if(sum==n) return true; return false;
}

void SoHoanHao(int a[], int n)
{
	printf("\nCac so hoan hao co trong mang la:");
	for (int i=0;i<n;i++)
	{
		if(bool(n)==true)
	 	printf("%d\t",a[i]);
	}
}


int main()
{
	int n;
	int a[max];
	int i;
	NhapSoLuongPhanTu(n);

	NhapMang(a,n);
	XuatMang(a,n);
	
	SoHoanHao(a,n);

	return 0;
}
