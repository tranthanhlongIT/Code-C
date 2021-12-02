#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

struct DaThuc
{
	int n;
	int *a;
};

void createPolynomial(DaThuc &d)
{
	cout << "Vui long nhap vao bac da thuc: ";
	cin >> d.n;
	
	d.a = new int[d.n + 1];
	d.a[d.n] = 1;
	for (int i = 0; i < d.n; i++)
	{
		srand(time(NULL));
		d.a[i] = rand() % 20 - 10;			// Truyen ngau nhien 1 he so
	}
}

void outputPolynomial(DaThuc d)
{
	for (int i = d.n; i >= 0; i--)
	{
		if (d.a[i] > 0) cout << " + ";
		if (d.a[i] != 0) cout << d.a[i];
		if (i > 1)
		{
			cout << "x^";
			cout << i;
		}
		else if (i == 1) cout << "x";
	}
}

int check2k(int n)
{
	int k = 2;
	int i = 1;
	while (n > k)
	{
		k *= 2;
		i++;
	}
	if (k >= 2) return i;
	return 0;
}


void convertPreProcessing(DaThuc d)
{
	DaThuc kq;
	if (d.a[d.n] == 1)
	{
		int k = check2k(d.n + 1); //n = 2^k-1
		if (k == 0)
		{
			cout << "Khong phai 2^k - 1" << endl;
			return;
		}
		int j = pow(2, k - 1); //j = 2^(k-1)
		int b = d.a[j - 1] - 1;

		cout << "\n***************(x^" << j << "+" << b << ")*"; //*q(x) + r(x)

		DaThuc q, r;

		q.n = j - 1;
		q.a = new int[q.n + 1];

		r.n = d.n - j;
		r.a = new int[r.n + 1];

		for (int i = 0; i <= q.n; i++)
			q.a[q.n - i] = d.a[d.n - i];
		cout << "(";
		outputPolynomial(q);
		cout << ")";

		for (int i = j - 1; i >= 0; i--)
			r.a[r.n - i] = d.a[r.n - i] - b * q.a[r.n - i];

		cout << " + (";
		outputPolynomial(r);
		cout << ")\n";

		if (q.n >= 3)
		{
			cout << "\n_________q(x): ";
			outputPolynomial(q);
			convertPreProcessing(q);
		}
		if (r.n >= 3)
		{
			cout << "\n^^^^^^^^^r(x): ";
			outputPolynomial(r);
			convertPreProcessing(r);
		}
	}
	else cout << "Khong nen convert!!!" << endl;
}

int main()
{
	DaThuc d;
	createPolynomial(d);
	outputPolynomial(d); cout << endl;
	convertPreProcessing(d);
}
