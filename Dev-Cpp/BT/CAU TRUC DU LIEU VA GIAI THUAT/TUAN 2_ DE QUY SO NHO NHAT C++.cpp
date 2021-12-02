#include <iostream> 
using namespace std; 
  
int NhapMang(int &n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
}

int TaoMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu: ";
		cin >> a[i];	
	}
} 

int SoNhoNhat(int a[], int n) 
{ 
    if (n == 1) 
        return a[0]; 
    return min(a[n - 1], SoNhoNhat(a, n - 1)); 
} 

 

int main() 
{ 
    int a[100];
    int n;
    NhapMang(n);
    TaoMang(a, n);
    int i = sizeof(a)/sizeof(a[0]); 
    cout <<  SoNhoNhat(a, n); 
    return 0; 
} 
