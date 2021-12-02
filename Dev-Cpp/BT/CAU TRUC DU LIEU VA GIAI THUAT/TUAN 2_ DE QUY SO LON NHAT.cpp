#include <stdio.h>

int NhapMang(int &n)
{
  printf("Nhap so luong phan tu: ");
  scanf("%d", &n);
}

void TaoMang(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
  	printf("Phan tu thu %d la: ", i+1);
    scanf("%d", &a[i]);
  }
}

int SoLonNhat(int a[], int i, int n)
{
	if (i == n - 1)
      	return a[i];
  	if (a[i] > a[i + 1])
    	a[i + 1] = a[i];
  	return SoLonNhat(a, i + 1, n);
}

int SoNhoNhat(int a[], int i, int n)
{
	if (i == n - 1)
      	return a[i];
  	if (a[i] < a[i + 1])
    	a[i + 1] = a[i];
  	return SoNhoNhat(a, i + 1, n);
}


int main()
{
  int a[100];
  int n;
  int i = 0;
  NhapMang(n);
  TaoMang(a,n);
  printf("So Lon Nhat La: %d\n", SoLonNhat(a, i, n));
  printf("So Nho Nhat La: %d", SoNhoNhat(a, i, n));
}
