#include <iostream>
using namespace std;

int Demsosanh = 0;
int Demdichchuyen = 0;

void BINARYINSERTIONSORT(int a[], int n)
{
	int left, right, mid;
	int x;
	for (int i = 1; i < n; i++)
	{
		x = a[i]; 
		left = 0;
		right = i - 1;
		while (left <= right)
		{
			Demsosanh++;
			mid = (left + right)/2;
			if (x < a[mid])
				right = mid - 1;
			else left = mid + 1;
		}
		int pos = left;
		for (int j = i; j > pos; j--)			// Dich chuyen mang //
		{
			Demdichchuyen++;
			a[j] = a[j - 1];
		}
		a[pos] = x;
	}
}

int main()
{
	int n; 
	int a[100];
	cout << "Nhap N: ";
	cin >> n;
	
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	BINARYINSERTIONSORT(a, n);	
	
	cout << "So lan so sanh: " << Demsosanh << endl;
	cout << "So lan dich chuyen: " << Demdichchuyen << endl;
	
	cout << "Mang da duoc sap xep: ";
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	}
	return 0;
}
