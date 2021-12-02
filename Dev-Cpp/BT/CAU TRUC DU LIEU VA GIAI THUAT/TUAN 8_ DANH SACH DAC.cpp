#include <iostream>
#define max 20
using namespace std;

struct BOOK
{
	string MASACH;
	int GIA;
	string TENSACH;
};

struct CLIST
{
	int n;
	BOOK a[max];
};

void init(CLIST &list)
{
	list.n = 0;
}

void input(CLIST &list)
{
	cin >> list.n;
	for (int i = 0; i < list.n; i++)
	{
		cin >> list.a[i].MASACH;
		cin >> list.a[i].GIA;
		cin.ignore();
		getline(cin, list.a[i].TENSACH);
	}
}


bool isEMPTY(CLIST list)
{
	if (list.n == 0)	return true;
	return false;
}

bool isFULL(CLIST list)
{
	if (list.n == max) return true;
	return false;
}

bool insert(CLIST &list, int k, BOOK newbook)
{
	if (!isFULL(list) && (k >= 0 && k <= list.n))
	{
    	for (int i = list.n; i > k; i--)
    	{
			list.a[i] = list.a[i - 1];
    	}
    	list.a[k] = newbook;
		list.n++;
    	return true;
	}
	return false;
}

int search(CLIST list, string ms)
{
	for (int i = 0; i < list.n; i++)
	{
		if (list.a[i].MASACH == ms)
		{
    		return i;
    	}
	}
	return -1;
}

bool erase(CLIST &list, int k)
{
	if (!isEMPTY(list) && (k >= 0 && k < list.n))
	{
    for (int i = k; i < list.n-1; i++)
    {
		list.a[i] = list.a[i + 1];
    }
    list.n--;
    return true;
	}
	return false;
}


int main()
{
	CLIST list;
	init(list);
	input(list);
	
	//output 1//
	for (int i = 0; i < list.n; i++)
	{
		cout << list.a[i].MASACH << " ";
	}
	cout << endl;
    
    //output 2//
	int k; cin >> k;
	BOOK newbook;
	cin >> newbook.MASACH;
	cin >> newbook.GIA;
	cin.ignore();
	getline(cin, newbook.TENSACH);
	bool kq = insert(list, k, newbook);
	if (kq)
	{
		for (int i = 0; i < list.n; i++)
		{
		cout << list.a[i].MASACH << " ";
		}
	}
	else cout << "FAILURE";
	cout << endl;
  
	//output 3//
	string ms; cin >> ms;
	int k2 = search(list, ms);
	bool kq2 = erase(list, k2);
	if (kq2)
	{
		for (int i = 0; i < list.n; i++)
		{
			cout << list.a[i].MASACH << " ";
		}
	}
	else cout << "FAILURE";
	cout << endl;
}
