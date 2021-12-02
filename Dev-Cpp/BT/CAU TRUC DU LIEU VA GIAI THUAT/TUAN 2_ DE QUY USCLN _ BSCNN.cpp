#include <iostream> 
using namespace std; 

int USCLN(int a, int b) 
{   
    if (a == 0)	return b; 
    if (b == 0)	return a; 
    if (a == b)	return a; 
   
    if (a > b)	return USCLN(a - b, b); 
    if (a < b)	return USCLN(a, b - a); 
} 

int BSCNN(int a, int b)  
{  
    return (a * b) / USCLN(a, b);  
}  
   
int main() 
{ 
    int a; cin >> a;
	int b; cin >> b; 
    int kq1 = USCLN(a, b);
	int kq2 = BSCNN(a, b);
	cout << kq1 << " ";
	cout << kq2; 
    return 0; 
} 
