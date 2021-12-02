#include <iostream>
using namespace std;

int dem = 0;

int LinearSearch(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		dem++;
		if (a[i] == x)
			return i + 1;
	}
	return -1;
}

int main()
{
	cout << "Nhap so luong phan tu: ";
	int n; cin >> n;
	
	int a[n];
	cout << "Phan tu: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	cout << "Nhap X can tim: ";
	int x; cin >> x;
	
	int pos = LinearSearch(a, n, x);
	cout << "Vi tri tim thay: " << pos << endl;
	cout << "so lan so sanh: " << dem;
	
}

