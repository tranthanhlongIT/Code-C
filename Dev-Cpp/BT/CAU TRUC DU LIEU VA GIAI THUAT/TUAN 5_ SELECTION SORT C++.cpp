#include <iostream>
using namespace std;

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
	for (int i = 0; i < n - 1; i++)
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
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
    	cin >> a[i];
	}
    SELECTIONSORT(a, n);
    cout << demsosanh << " ";
    cout << demhoanvi << endl;
    for (int i = 0; i < n; i++)
    {
    	cout << a[i] << " ";
    }
}
