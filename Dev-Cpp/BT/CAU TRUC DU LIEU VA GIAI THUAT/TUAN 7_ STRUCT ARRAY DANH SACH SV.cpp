#include <iostream>
#include <string>
using namespace std;

int dem = 1;
int demNAM = 0;
int demNU = 0;

struct SV
{
	int maso;
	float gpa;
	string gender;
	string fullname;
};

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
	if (pos == -1) return FULLNAME;
	string name;
	for (unsigned int i = pos + 1; i < len; i++)
	{
		name += FULLNAME[i];
	}
	return name;
}

int main()
{
	int n; cin >> n;
	SV a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].maso;
		cin >> a[i].gpa;
		cin >> a[i].gender;
		cin.ignore();
		getline(cin, a[i].fullname);
	}
	string keyword; cin >> keyword;

	for (int i = 0; i < n; i++)
	{
		cout << a[i].maso << " ";
	}
	cout << endl;
  
	for (int i = 0; i < n; i++)
	{
		if (a[i].gender == "NAM")
    		demNAM++;
		else demNU++;
	}
	cout << demNAM << " " << demNU << endl;
  
	SV temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
    		if (a[i].gpa > a[j].gpa)
    		{
    			temp = a[i];
        		a[i] = a[j];
        		a[j] = temp;
			}
    	}
	}
  
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
    		if (a[i].gpa == a[j].gpa)
    		{
    			dem++;
    		}
		}
	}
  
	for (int i = dem + 1; i < n; i++)
	{
		cout << a[i].maso << " ";
	}
	cout << endl;
  
  
	bool isFound = false;
	for (int i = 0; i < n; i++)
	{
		if(getFIRSTNAME(a[i].fullname) == keyword)
		{
			cout << a[i].maso << " ";
    		isFound = true;
		}
	}
	if (!isFound)	cout << "NOT FOUND";
	cout << endl;
	return 0;
}
  
