#include <iostream>
using namespace std;

long F(int n)
{
	if (n == 0) return 0;
	return n + F(n - 1);
}


int main()
{
	int n; cin >> n;
	long kq;
	kq = F(n);
	cout << kq;
	return 0;
}  
