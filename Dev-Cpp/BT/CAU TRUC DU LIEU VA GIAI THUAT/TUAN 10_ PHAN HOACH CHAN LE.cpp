#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void hoanvi(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

void quicksort(int a[], int n)
{
	int i = 0;
	int j = n - 1;
	int k = 0;
	while (i < j)
	{
		while (a[i] % 2 == 0)
		{
    		i++;
    		k++;
		}
		while (a[j] % 2 != 0 && i < j)
    		j--;
		if (i < j)
    		hoanvi(a[i], a[j]);
	}
	sort(a, a + k);
	sort(a + k, a + n, greater<int>());
}

int main()
{
	int n; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
  
	quicksort(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}    
