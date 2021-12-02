#include <iostream>
using namespace std;

struct SV
{
	int ms;
	float gpa;
	string gender;
	string name;
};

struct NODE
{
	SV info;
	NODE* next;
};

struct LLIST
{
	NODE* head;
};

NODE* CreateNODE(SV X)
{
	NODE* p = new NODE;
	if (p != NULL)
	{
    	p->info = X;
    	p->next = NULL;
	}
	return p;
}

void Init(LLIST &list)
{
	list.head = NULL;
}

NODE* InsertHead(LLIST &list, SV X)
{
	NODE* p = CreateNODE(X);
	if (p != NULL)
	{
		p->next = list.head;
		list.head = p;
	}
	return p;
}

NODE* InsertAfter(LLIST &list, NODE* q, SV X)
{
	NODE* p = CreateNODE(X);
	if (p != NULL)
	{
		p->next = q->next;
		q->next = p;
	}
	return p;
}

void Input(LLIST &list)
{
	int n; cin >> n;
	NODE* q = NULL;
	for (int i = 0; i < n; i++)
	{
		SV X;
    	cin >> X.ms;
    	cin >> X.gpa;
    	cin >> X.gender;
    	cin.ignore();
    	getline(cin, X.name);
    	if (i == 0)	q = InsertHead(list, X);
    	else q = InsertAfter(list, q, X);
	}
}

void PrintByMS(LLIST &list)
{
	NODE* p = list.head;
	while (p != NULL)
	{
		SV student = p->info;
    	cout << student.ms << " ";
    	p = p->next;
	}
}


void swap(NODE* a, NODE* b)												// Line Code 2  //
{
	SV temp = a->info;
	a->info = b->info;
	b->info = temp;
}

void bubblesort(LLIST &list)
{
	int swapped;
	NODE* p;
	NODE* q = NULL;
	if (p != NULL)	
	{
		do
    	{
			swapped = 0;
			p = list.head;
			while (p->next != q)
			{
        		if (p->info.gpa > p->next->info.gpa)
        		{
        			swap(p, p->next);
        			swapped = 1;
    			}
        		p = p->next;
    		}
    		q = p;
		}
		while (swapped);
	}
}


NODE* FindByGPA(LLIST &list, NODE* &q)									// Line Code 3 //
{
  	NODE* p = list.head;
  	while (p != NULL)
  	{
    	SV sv = p->info;
    	if (p->info.gpa < 7.0)	break;
    	q = p;
    	p = p->next;
	}
	return p;
}


bool isEMPTY(LLIST &list)
{
	if (list.head == NULL)
		return true;
	return false;
}

bool DeleteHead(LLIST &list)
{
	if (!isEMPTY(list))
  	{
		NODE* p = list.head;
		list.head = p->next;
		delete p;
		return true;
	}
	return false;
}

bool DeleteAfter(LLIST &list, NODE* q)
{
	if (q != NULL)
	{
		NODE* p = q->next;
    	if (p != NULL)
    	{
    		q->next = p->next;
    		delete p;
    		return true;
		}
	}
	return false;
}

bool DeleteByGPA(LLIST &list)
{
	NODE* q = NULL;
	NODE* p = FindByGPA(list, q);
	if (p == NULL) return false;
	if (q == NULL) return DeleteHead(list);
	else DeleteAfter(list, q);
}

void EraseGPALowerThan7(LLIST &list)
{
	NODE* p = list.head;
	while (p != NULL)
	{
    	SV sv = p->info;
		if (sv.gpa < 7.0)
		{
			DeleteByGPA(list);
		}
		else cout << sv.ms << " ";
		p = p->next;
	}
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
	bubblesort(list);
	PrintByMS(list);
	cout << endl;
  
	//output 3
	EraseGPALowerThan7(list);
  
	return 0;
}
