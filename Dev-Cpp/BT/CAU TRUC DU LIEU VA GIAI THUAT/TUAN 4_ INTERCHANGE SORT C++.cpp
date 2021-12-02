#include <iostream>
using namespace std;

int DemSoSanh = 0;
int DemHoanVi = 0;

void TaoMang(int a[], int n)
{
	cout << "Tao Mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void HoanVi(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

void SapXep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int t;
			DemSoSanh++;
			if (a[i] > a[j])
			{
				DemHoanVi++;
				HoanVi(a[i], a[j]);
			}
		}
	}
}

void InRa(int a[], int n)
{
	cout << "Da Sap Xep: ";
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	}
}

int main()
{
	int a[100];
	cout << "Nhap N: ";
	int n; cin >> n;
	TaoMang(a, n);
	SapXep(a, n);
	cout << "So lan so sanh: " << DemSoSanh << endl;  
	cout << "So lan hoan vi: " << DemHoanVi << endl;
	InRa(a, n);
	return 0;
}
