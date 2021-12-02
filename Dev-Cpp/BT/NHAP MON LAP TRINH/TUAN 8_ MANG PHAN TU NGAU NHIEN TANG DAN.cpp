/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100
#define x 100
#define y 200

void NhapSoLuongPhanTu(int &N)
{
	do
    {
        printf("so luong phan tu: ");
        scanf("%d", &N);							
        if (N <= 0 || N > max)
        printf("Nhap lai");
    }
    while (N <= 0 || N > max);
}

void PhanTuNgauNhien(float a[], int N)
{
	printf("Cac phan tu ngau nhien: ");
    srand(time(0));
    for(int i = 0; i < N; i++)
    {
        a[i] = (x + rand() % (y - x + 1)) / 100.;
        printf("%5.2f\t", a[i]);
    }
}

void SapXepPhanTuTangDan(float a[], int N, float z) 								/// ********************//
{
    for (int i = 0; i < N - 1; i++)													/// Kiem tra tu 0 den N - 1 //      N - 1 vi bat dau tu i = 0//
    {																				
        for (int j = i + 1; j < N; j++)												/// Kiem tra so dau tien voi cac so con lai ///		
 	      {													
            if(a[i] > a[j])															/// 	HOAN VI    ///
            {											
                z = a[i];																
                a[i] = a[j];															
                a[j] = z; 
            }																		///   TUI KIEM TRA THEO THU TU TANG DAN != CACH CUA CO LA KIEM TRA TU CUOI	///	
        }
    }    
}

void InRaPhanTuTangDan(float a[], int N)
{	
	printf("\nCac phan tu tang dan: ");													/// IN RA THEO THU TU   ///
	for(int i = 0; i < N; i++)
    {
        printf("%5.2f\t", a[i]);
    }
}


int main()
{
    int N;
    float a[max];
    float z;
	NhapSoLuongPhanTu(N);
	PhanTuNgauNhien(a, N);
	SapXepPhanTuTangDan(a, N, z);
    InRaPhanTuTangDan(a, N);
}
