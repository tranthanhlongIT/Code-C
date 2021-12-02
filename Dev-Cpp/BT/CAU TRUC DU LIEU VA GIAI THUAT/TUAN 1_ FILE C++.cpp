#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("./input.txt");
	int a; fin >> a;
	int b; fin >> b;
	fin.close();
	
	int r = a + b;
	
	ofstream fout("./output.txt");
	fout << r;
	fout.close();
	
	return 0;
}
