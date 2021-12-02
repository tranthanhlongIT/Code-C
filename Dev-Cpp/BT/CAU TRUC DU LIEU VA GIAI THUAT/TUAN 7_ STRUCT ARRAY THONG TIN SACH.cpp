#include <iostream>
using namespace std;

struct BOOK
{
	string MASACH;
	int GIABAN;
	string TENSACH;
};

int main()
{
	int n; cin >> n;
	BOOK a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].MASACH;
    	cin >> a[i].GIABAN;
    	cin.ignore();
    	getline(cin, a[i].TENSACH);
	}
  
	int min; cin >> min;
	int max; cin >> max;
  
	for (int i = 0; i < n; i++)
	{
		cout << a[i].MASACH << " ";
	}
	cout << endl;
  
	bool isFOUND = false;
	for (int i = 0; i < n; i++)
	{
		if (min <= a[i].GIABAN && a[i].GIABAN <= max)
		{
    		cout << a[i].MASACH << " ";
    		isFOUND = true;
    	}
	}
	if (!isFOUND) cout << "0";
	cout << endl;
  
	isFOUND = false;
	string keyword; cin >> keyword;
	for (int i = 0; i < n; i++)
	{
		if (a[i].TENSACH.find(keyword) != -1)
		{
    		cout << a[i].MASACH << " ";
    		isFOUND = true;
		}
	}
	if (!isFOUND) cout << "NOT FOUND";
	cout << endl;    
  
	BOOK TEMP;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
    		if (a[i].GIABAN < a[j].GIABAN)
    		{
        		TEMP = a[i];
            	a[i] = a[j];
            	a[j] = TEMP;
    		}
    	}
	}
        
	for (int i = 0; i < n; i++)
	{
		cout << a[i].MASACH << " ";
	}
	cout << endl;
        
	return 0;
}
        
  
