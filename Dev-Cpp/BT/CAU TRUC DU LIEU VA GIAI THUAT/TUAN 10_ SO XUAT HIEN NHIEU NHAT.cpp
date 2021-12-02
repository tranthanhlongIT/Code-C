#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 
  
int demmax;
int dem;

int mostFrequent(int a[], int n) 
{ 
    sort(a, a + n); 
   
    dem = 1;
    demmax = 1;
    int result = a[0];
    for (int i = 1; i < n; i++) 
    { 
        if (a[i] == a[i - 1]) 
            dem++; 
        else 
        { 
            if (dem > demmax) 
            { 
                demmax = dem; 
                result = a[i - 1]; 
            } 
            dem = 1; 
        } 
    } 
   
    if (dem > demmax) 
    { 
        demmax = dem; 
        result = a[n - 1]; 
    } 
    return result; 
} 
  

int main() 
{ 
	int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    cout << mostFrequent(a, n) << " "; 
    cout << demmax;
    return 0; 
} 
