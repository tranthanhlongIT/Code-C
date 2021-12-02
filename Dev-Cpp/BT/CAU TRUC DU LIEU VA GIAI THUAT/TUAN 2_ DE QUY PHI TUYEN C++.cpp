#include <iostream>
using namespace std;

long F(int n)
{
	if (n == 0) return 1;
	long S = 0;
	for (int i = 1; i <= n; i++)
	{
		S += (i * i) * F(n - i);
	}
	return S;
}

int main()
{
	int n; cin >> n;
	long kq = F(n);
	cout << kq;
	return 0;
}
