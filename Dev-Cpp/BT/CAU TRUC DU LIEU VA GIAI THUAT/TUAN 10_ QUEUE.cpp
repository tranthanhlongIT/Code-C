#include <iostream>
#define N 10
using namespace std;

struct QUEUE
{
	int front;
	int rear;
	int a[N];
	int count;
};

void Init(QUEUE &q)
{
	q.front = 0;
	q.rear = -1;
	q.count = 0;
}

bool isFULL(QUEUE q)
{
	if (q.count == N)
		return true;
	return false;
}

bool isEMPTY(QUEUE q)
{
	if (q.count == 0)
		return true;
	return false;
}

bool Push(QUEUE &q, int x)
{
	if (!isFULL(q))
	{
		q.rear = (q.rear + 1);
		q.a[q.rear] = x;
		q.count++;
		return true;
	}
	return false;
}

int Pop(QUEUE &q)
{
	if (!isEMPTY(q))
	{
		int x = q.a[q.front];
		q.front = (q.front + 1);
		return x;
	}
	return -1;
}
 
void Display(QUEUE q)
{
	if (!isEMPTY(q))
	{
    	for (int i = q.front; i <= q.rear; i++)
        	cout << q.a[i] << " ";   
	}
}

int main()
{
	QUEUE q;
	Init(q);
  
	int n; cin >> n;              
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		Push(q, x);
	}
	Display(q);
	cout << endl;
  
	int m; cin >> m;
	for (int i = 0; i < m; i++)
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

