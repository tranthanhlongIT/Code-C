#include <iostream>
using namespace std;

struct BOOK
{
	string MASO;
	int GIA;
	string NAME;
};

struct NODE
{
	BOOK info;
	NODE* pNEXT;
};

struct LLIST
{
	NODE* pHEAD;
};

NODE* CreateNODE(BOOK x)
{
	NODE* p = new NODE;
	if (p != NULL)
	{
		p->info = x;
		p->pNEXT = NULL;
	}
	return p;
}

void Init(LLIST &list)
{
	list.pHEAD = NULL;
}

NODE* InsertHead(LLIST &list, BOOK x)
{
	NODE* p = CreateNODE(x);
	if (p != NULL)
	{
		p->pNEXT = list.pHEAD;
    	list.pHEAD = p;
	}
	return p;
}

NODE* InsertAfter(LLIST &list, NODE* q, BOOK x)
{
	NODE* p = CreateNODE(x);
	if (p != NULL)
	{
    	p->pNEXT = q->pNEXT;
    	q->pNEXT = p;
	}
	return p;
}

void Input(LLIST &list)
{
	int n; cin >> n;
	NODE* q = NULL;
	for (int i = 0; i < n; i++)
  	{
		BOOK x;
		cin >> x.MASO;
		cin >> x.GIA;
		cin.ignore();
		getline(cin, x.NAME);
    	if (i == 0)	q = InsertHead(list, x);
    	else q = InsertAfter(list, q, x);
	}
}

void PrintByMS(LLIST list)
{
	NODE* p = list.pHEAD;
	while (p != NULL)
	{
    	BOOK book = p->info;
    	cout << book.MASO << " ";
    	p = p->pNEXT;
	}
}

void FindByName(LLIST list, string keyword)
{
	int dem = 0;
	NODE* p = list.pHEAD;
	while (p != NULL)
	{
    	BOOK book = p->info;
    	if (book.NAME.find(keyword) != -1)
    	{
    		cout << book.MASO << " ";
    		dem++;
    	}
		p = p->pNEXT;
	}
	if (dem == 0) cout << "NOT FOUND";
}

NODE* FindByMS(LLIST list, string MASO)
{
	NODE* p = list.pHEAD;
	while (p != NULL)
	{
		if (p->info.MASO == MASO) break;
		p = p->pNEXT;
	}
	return p;
}

NODE* FindByMS2(LLIST list, string MASO, NODE* &q)
{
	NODE* p = list.pHEAD;
	while (p != NULL)
	{
    	if (p->info.MASO == MASO)	break;
    	q = p;
    	p = p->pNEXT;
	}
	return p;
}

bool isEMPTY(LLIST list)
{
	if (list.pHEAD == NULL)
		return true;
	return false;
}

bool DeleteHead(LLIST &list)
{
	if (!isEMPTY(list))
	{
		NODE* p = list.pHEAD;
		list.pHEAD = p->pNEXT;
		delete p;
		return true;
	}
	return false;
}

bool DeleteAfter(LLIST &list, NODE* q)
{
	if (q != NULL)
	{
		NODE* p = q->pNEXT;
		if (p != NULL)
		{
    		q->pNEXT = p->pNEXT;
    		delete p;
    		return true;
		}
	}
	return false;
}

bool DeleteByMS(LLIST &list, string MASO)
{
	NODE* q = NULL;
	NODE* p = FindByMS2(list, MASO, q);
	if (p == NULL)	return false;
	if (q == NULL)	return DeleteHead(list);
	else	return DeleteAfter(list, q);
}
    
  

int main()
{
	LLIST list;
	Init(list);
	Input(list);
	
	//output 1
	PrintByMS(list);
	cout << endl;
  
	//output 2
	string keyword; cin >> keyword;
	FindByName(list, keyword);
	cout << endl;
  
	//output 3
	string masoA; cin >> masoA;
	BOOK X;
	cin >> X.MASO;
	cin >> X.GIA;
	cin.ignore();
	getline(cin, X.NAME);
	NODE* q1 = FindByMS(list, masoA);
	if (q1 != NULL)
	{
		NODE* p = InsertAfter(list, q1, X);
    	if (p != NULL)
    	{
			PrintByMS(list);
		}
		else cout << "FAILURE";
	}
	else cout << "FAILURE";
	cout << endl;
  
	//output 4
	bool result1 = DeleteHead(list);
	if (result1)
	{
		PrintByMS(list);
	}
	else cout << "FAILURE";
	cout << endl;
    
	//output 5
	string masoB; cin >> masoB;
	NODE* q2 = FindByMS(list, masoB);
	bool result2 = DeleteAfter(list, q2);
	if (result2)
	{
		PrintByMS(list);
	}
	else cout << "FAILURE";
	cout << endl;
  
	//output 6
	string masoC; cin >> masoC;
	bool result3 = DeleteByMS(list, masoC);
	if (result3)
	{
		PrintByMS(list);
	}
	else	cout << "FAILURE";  
	return 0;
}
