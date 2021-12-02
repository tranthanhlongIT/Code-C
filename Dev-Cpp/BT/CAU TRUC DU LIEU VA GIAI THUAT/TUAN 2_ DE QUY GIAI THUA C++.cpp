#include <iostream>
using namespace std;

long F(int n)
{
	if (n == 0) return 1;
	return n * F(n - 1);
}

int main()
{
	int n; cin >> n;
	long kq = F(n);
	cout << kq;
	return 0;
}
