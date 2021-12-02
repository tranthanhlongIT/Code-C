#include <stdio.h>

int main()
{
	FILE* fin = fopen("./input.txt", "rt");
	int a; fscanf(fin, "%d", &a);
	int b; fscanf(fin, "%d", &b);
	fclose(fin);
	
	int r = a + b;
	
	FILE* fout = fopen("./output.txt", "wt");
	fprintf(fout, "%d", r);
	fclose(fout);
	
	return 0;
}
