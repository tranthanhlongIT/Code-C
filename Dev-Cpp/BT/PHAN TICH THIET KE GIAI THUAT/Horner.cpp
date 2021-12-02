#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;


int Evaluate(int n, int x, int a[])
{
	int result = a[0] + a[1] * x;
	int xpower = x;
	for (int i = 2; i <= n; i++)
	{
		xpower = xpower *x;	
		result = result + a[i] * xpower;
	}
	return result;
}

int HornersMethod(int n, int x, int a[])
{
	int result = a[n];
	for (int i = n - 1; i >= 0; i--)
	{
		result = result * x;
		result = result + a[i];
	}
	return result;
}

void Output(int a[], int l, int r, int i)
{
	for (int k = r; k >= l; k--)
	{
		if (k > l) cout << a[k] << "x^" << k - i << " + ";
		else if (k == l) cout << a[k] << "x^" << k - i;
	}
}

void OutputConvertedHorner(int a[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		
		if (a[i] != 0)
		{
			int dem = 1;
			for (int k=i-1; k>0 && a[k] == 0; k--)
			{
				dem++;
			}
			cout << "(";
			Output(a, i, n, i);
			cout << ")*x^" <<dem << " + " << a[i-1] <<endl;
		}
	}
}

int main()
{
	srand(time(0));
	int x, n;
	cout << "Bac cua da thuc la n = ";
	cin >> n;
	
	int* a = new int[n + 1];
	cout << "Nhap x de tinh da thuc: ";
	cin >> x;
	cout << "Vui long nhap cac he so:\n";
	for (int i = n; i >= 0; i--)
	{
		cout << "He so cua x^" << i << ": ";
		cin >> a[i];
	}
	cout << "Da thuc duoc tao: ";
	Output(a, 0, n, 0);
	cout << endl;
	cout <<"\nTruyen thong: "<< Evaluate(n, x, a) << endl;
	cout <<"Horner: " <<HornersMethod(n, x, a)<<endl<<endl;
	
	OutputConvertedHorner(a, n);
}
