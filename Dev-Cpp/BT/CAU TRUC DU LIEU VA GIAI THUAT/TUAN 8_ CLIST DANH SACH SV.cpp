#include <iostream>
#define max 100
using namespace std;

struct SV
{
	int maso;
	float gpa;
	string gender;
	string name;
};

struct CLIST
{
	int n;
	SV a[max];
};

void INIT(CLIST &list)
{
	list.n = 0;
}

void INPUT(CLIST &list)
{
	cin >> list.n;
	for (int i = 0; i < list.n; i++)
	{
		cin >> list.a[i].maso;
    	cin >> list.a[i].gpa;
    	cin >> list.a[i].gender;
    	cin.ignore();
    	getline(cin, list.a[i].name);
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

bool INSERT(CLIST &list, int k, SV newSV)
{
	if (!isFULL(list) && (k >= 0 && k <= list.n))
	{
		for (int i = list.n; i > k; i--)
    	{
    		list.a[i] = list.a[i-1];
    	}
		list.a[k] = newSV;
    	list.n++;
    	return true;
	}
	return false;
}

bool ERASE(CLIST &list, int k)
{
	if (!isEMPTY(list) && (k > 0 && k < list.n))	
	{
		for (int i = k; i < list.n; i++)
    	{
    		list.a[i] = list.a[i+1];
		}
		list.n--;
    	return true;
	}
	return false;
}


int SEARCH(CLIST list, int maso)
{
	for (int i = 0; i < list.n; i++)
	{
		if (list.a[i].maso == maso)
		{
    		return i;
		}
	}
	return -1;
}

int getLASTSPACE(string FULLNAME)
{
	int len = FULLNAME.length();
	for (unsigned int i = len - 1; i >= 0; i--)
	{
		if (FULLNAME[i] == ' ')
    	{
			return i;
		}
	}
	return -1;
}

string getFIRSTNAME(string FULLNAME)
{
	int pos = getLASTSPACE(FULLNAME);
	int len = FULLNAME.length();
	string ten;
	if (pos == - 1)	return FULLNAME;
	for (unsigned int i = pos + 1; i < len; i++)
	{
    	ten += FULLNAME[i];
	}
  return ten;
}

int main()
{
	CLIST list;
	INIT(list);
	INPUT(list);
  
	// output 1 //
	for (int i = 0; i < list.n; i++)
	{
    	cout << list.a[i].maso << " ";
	}
	cout << endl;
  
	// output 2 //
	int k; cin >> k;
	SV newSV;
	cin >> newSV.maso;
	cin >> newSV.gpa;
	cin >> newSV.gender;
	cin.ignore();
	getline(cin, newSV.name);
	int result1 = INSERT(list, k, newSV);
	if (result1)
	{
		for (int i = 0; i < list.n; i++)
		{
    		cout << list.a[i].maso << " ";
		}
	}
	else cout << "FAILURE";
	cout << endl;
  
	// output 3 //
	int maso; cin >> maso;
	int x = SEARCH(list, maso);
	int result2 = ERASE(list, x);
	if (result2)
	{
    	for (int i = 0; i < list.n; i++)
		{		
    		cout << list.a[i].maso << " ";
		}
	}
	else cout << "FAILURE";
	cout << endl;
  
	// output 4 //
	string keyword; cin >> keyword;
	bool isFOUND = false;
	for (int i = 0; i < list.n; i++)
	{
		if (getFIRSTNAME(list.a[i].name) == keyword)
		{
    		cout << list.a[i].maso << " ";
    		isFOUND = true;
    	}
	}
	if (!isFOUND) cout << "NOT FOUND";
	cout << endl;
	return 0; 
}
