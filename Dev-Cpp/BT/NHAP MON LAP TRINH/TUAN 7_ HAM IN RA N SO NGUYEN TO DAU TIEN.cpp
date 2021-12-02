/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void Nhap1SoNguyenDuong(int &N)
{
	do
	{
		printf("Ban muon xuat bao nhieu SNT dau tien: ");
		scanf("%d", &N);
	}while(N<=0); //N>0 dong y
}

bool KtraSNT(int N)
{
	int dem = 2; //1, N
	for(int i=2; i<N; i++)
	{
		if(N%i==0) //chia het
			dem++;
	}
	if(dem == 2) 
	{
		printf("%d\t", N);
		return true; //Day la SNT
	}
	return false;
}

int main()
{		
	int M;
	
	Nhap1SoNguyenDuong(M);
	
	int demSNT = 0;
	int N = 2;
	printf("%d SNT dau tien: ", M);
	while(demSNT < M) //So luong can chua DU
	{
		if(KtraSNT(N)) demSNT++;
		N++; //len 3, 4, 5, ...
	}
	
	return 0;
}


