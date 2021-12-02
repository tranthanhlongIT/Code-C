#include <iostream>
#define N 10
using namespace std;

struct STACK
{
	int top;
	int a[N];
};

void Init(STACK &s)
{
	s.top = 0;
}

bool isEMPTY(STACK &s)
{
	if (s.top == 0)
		return true;
	return false;
}

bool isFULL(STACK &s)
{
	if (s.top == N)
		return true;
	return false;
}

bool Push(STACK &s, int x)
{
	if (!isFULL(s))
	{
		s.a[s.top] = x;
    	s.top++;
    	return true;
	}
	return false;
}

int Pop(STACK &s)
{
	if (!isEMPTY(s))
	{
		s.top--;
		int x = s.a[s.top];
		return x;
	}
	return -1;
}

void Display(STACK s)
{
	if (!isEMPTY(s))
	{
		for (int i = 0; i < s.top; i++)
    		cout << s.a[i] << " ";
	}
}
    

int main()
{
	STACK s;
	Init(s);
  
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		Push(s, x);
	}
	Display(s);
	cout << endl;
  
	int m; cin >> m;
	for (int i = 0; i < m; i++)
	{
		Pop(s);
	}
	Display(s);
	cout << endl;
  
	int k; cin >> k;
	for (int i = 0; i < k; i++)
	{
		int x; cin >> x;
		Push(s, x);
	}
	Display(s);
  
	return 0;
}
