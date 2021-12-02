#include <stdio.h>


int dem = 0;

int BinarySearch(int a[], int n, int x)
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		dem++;
		int mid = (left + right)/2;
		if (a[mid] == x)
			return mid;
		else if (a[mid] > x)
			right = mid - 1;
		else if (a[mid] < x)
			left = mid + 1;
	}
	return -1;
}


int main()
{
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	int a[n];
	printf("Phan tu: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int x;
	printf("Nhap X can tim: ");
	scanf("%d", &x);
	
	int pos = BinarySearch(a, n, x);
	printf("Ket qua vi tri tim duoc: %d\n", pos);
	printf("So lan tim kiem: %d", dem);
}
