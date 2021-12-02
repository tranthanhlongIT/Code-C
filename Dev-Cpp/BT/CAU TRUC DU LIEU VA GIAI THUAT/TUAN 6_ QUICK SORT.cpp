#include <stdio.h>

int dem = 0;

void hoanvi(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

void QUICKSORT(int a[], int left, int right)
{
	int i = left;
	int j = right;
	int mid = (left + right) / 2;
	int x = a[mid];
	while (i <= j)
	{						
		while (a[i] < x) 	// TIM RA 2 PHAN TU DUNG SAI VI TRI //
			i++;
		while (a[j] > x) 
			j--;
		if (i <= j)		// HOAN VI 2 PHAN TU //
		{
			if (i != j)
			{
				dem++;
				hoanvi(a[i], a[j]);
			}
			i++;
			j--;
		}
	}
	if (left < j) QUICKSORT(a, left, j);		// GOI DE QUY CHO 2 NHANH TRAI PHAI //
	if (i < right) QUICKSORT(a, i, right);
}




int main()
{
	int n;
	int a[100];
	printf("Nhap N: ");
	scanf("%d", &n);
	
	printf("Nhap phan tu: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	QUICKSORT(a, 0, n - 1);
	
	printf("Mang da sap xep: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	
	printf("\nSo lan hoan vi: %d", dem);
	return 0;
}
