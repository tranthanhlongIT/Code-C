#include <iostream>
using namespace std;

int Tong(int n)
{
	if (n == 0) return 0;
	return (n % 10 + Tong(n / 10));
}

int main()
{
	int n; cin >> n;
	long kq = Tong(n);
	cout << kq << endl;
	return 0;
}
