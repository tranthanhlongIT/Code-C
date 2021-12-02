#include <iostream>
#define N 10
using namespace std;

struct CQUEUE
{
	int front;
	int rear;
	int a[N];
	int count;
};

void Init(CQUEUE &q)
{
	q.front = 0;
	q.rear = -1;
	q.count = 0;
}

bool isFULL(CQUEUE q)
{
	if (q.count == N)
		return true;
	return false;
}

bool isEMPTY(CQUEUE q)
{
	if (q.count == 0)
		return true;
	return false;
}

bool Push(CQUEUE &q, int x)
{
	if (!isFULL(q))
	{ 
    	q.rear = (q.rear + 1) % N;
    	q.a[q.rear] = x;
    	q.count++;
    	return true;
    }
	return false;
}

int Pop(CQUEUE &q)
{
	if (!isEMPTY(q))
	{
		int x = q.a[q.front];
    	q.front = (q.front + 1) % N;
    	q.count--;
    	return x;
	}
	return -1;
}

void Display(CQUEUE q)
{
	if (!isEMPTY(q))
	{
		if (q.front <= q.rear)
    	{
    		for (int i = q.front; i <= q.rear; i++)
    			cout << q.a[i] << " ";
		}
    	else
    	{
    		for (int i = q.front; i <= N - 1; i++)
        		cout << q.a[i] << " ";
    		for (int i = 0; i <= q.rear; i++)
    			cout << q.a[i] << " ";
    	}   
	}
}


int main()
{
	CQUEUE q;
	Init(q);
  
	int n; cin >> n;
	for (int i = 0 ; i < n; i++)
	{
		int x; cin >> x;
		Push(q, x);
	}
	Display(q);
	cout << endl;
  
	int m; cin >> m;
	for (int i = 0 ; i < m; i++)
	{
		Pop(q);
	}
	Display(q);
	cout << endl;
  
	int k; cin >> k;
	for (int i = 0; i < k; i++)
	{
		int x; cin >> x;
		Push(q, x);
	}	
	Display(q);
    
	return 0;
}

