#include <stdio.h>
#define max 100

int demsosanh = 0;
int demhoanvi = 0;

void hoanvi(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

void SELECTIONSORT(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			demsosanh++;
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			demhoanvi++;
			hoanvi(a[min], a[i]);
		}
	}
}

int main()
{
	int n; 
	printf("Nhap N: ");
	scanf("%d", &n);
	
	int a[max];
	printf("Nhap mang: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	SELECTIONSORT(a, n);
	
	printf("So lan so sanh: %d\n", demsosanh);
	printf("So lan hoan vi: %d\n", demhoanvi);
	
	printf("Mang sau khi sap xep: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
