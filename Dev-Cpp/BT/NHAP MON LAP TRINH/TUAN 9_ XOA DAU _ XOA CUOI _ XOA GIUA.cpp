void xuatmang(int a[], int n)
{
	for (int i = 0; i < N; i++)
	printf("%D")
}


bool KTRARONG(int N)
{
	return n == 0;
}

void xoacuoi(int a[], int&n)
{
	if (ktraong(N))
	{
		printf("Rong");
		return;
	}
	
	n--;
	printf("")
}


void xoadau(int a[], int&n)
{
	if (ktraong(N))
	{
		printf("Rong");
		return;
	}
	
	for (int i = 1; i < N; i++)
		a[i-1] = a[i];
	n--;
	printf(" sau khi xoa dau: ")
}

void xoagiua(int a[], int &n, int k)
{
	for (int i = k + 1; i< N; i++ )
		a[i-1] = a[i];
		n--;
	
	printf("sau khi xoa tai K: ");
}
