#include <iostream>
using namespace std;

int Demsosanh = 0;
int Demdichchuyen = 0;

void INSERTIONSORT(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int x = a[i];
		int pos = i;
		while (pos > 0)				// 	    So sanh		//
		{
			Demsosanh++;
			if (a[pos - 1] > x)
				pos--;
			else break;
		}
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
	
	INSERTIONSORT(a, n);	
	
	cout << "So lan so sanh: " << Demsosanh << endl;
	cout << "So lan dich chuyen: " << Demdichchuyen << endl;
	
	cout << "Mang da duoc sap xep: ";
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	}
	return 0;
}
