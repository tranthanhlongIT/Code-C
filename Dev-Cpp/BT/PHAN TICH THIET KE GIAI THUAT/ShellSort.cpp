#include <iostream>
using namespace std;

void TaoMang(int a[], int n)
{
	cout << "Nhap mang: " << endl;
	for (int i = 0; i < n; i++)
	{
    	cin >> a[i];
	}
}

void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}	
}

/*void ShellSort (int a[], int n)
{ 	
	int d = n;
	while (d >=1)
	{	 
		d = (d+1) / 2;
		cout << d << endl;
		for (int i=0; i < (n-d); i++)
		{	
			if (a[i+d] < a[i])
			{
				swap(a[i+d], a[i]);
				cout << d << endl;
			}
		}
	}
}*/

void ShellSort(int arr[], int n) 
{ 
    for (int gap = n/2; gap > 0; gap /= 2) 
    { 
    	for (int i = gap; i < n; i += 1) 
    	{	 
            //sort sub lists created by applying gap 
			int temp = arr[i]; 			 
			int j; 
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
				arr[j] = arr[j - gap];  
			arr[j] = temp; 
        } 
    } 
} 



int main()
{
  int a[100];
  int n; cin >> n;
  TaoMang(a, n);
  //ShellSort(a, n);
  XuatMang(a,n);
  return 0;
}


