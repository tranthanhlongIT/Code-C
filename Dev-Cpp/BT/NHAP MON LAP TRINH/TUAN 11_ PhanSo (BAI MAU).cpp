#include <stdio.h>

#define MAX 20
typedef struct PS
{
	int ts;
	int ms;
};
void RutGon(PS &p);

void nhap1PS(PS &p)
{
	printf("Vui long nhap vao tu so: ");
	scanf("%d", &p.ts);
	printf("Vui long nhap vao mau so: ");
	scanf("%d", &p.ms);
}

void xuat1PS(PS p)
{
	if(p.ms == 1)
		printf("%d", p.ts);
	else printf("%d/%d", p.ts, p.ms);	
}

PS Cong2PS(PS p1, PS p2)
{
	PS kq;
	kq.ts = p1.ts*p2.ms + p1.ms * p2.ts;
	kq.ms = p1.ms * p2.ms;
	
	RutGon(kq);
	
	return kq;
}

int USCLN(int a, int b)
{
	while(a!=b)
	{
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}


void RutGon(PS &p)
{
	int us = USCLN(p.ts, p.ms);
	p.ts = p.ts/us;
	p.ms = p.ms/us;
}

void nhapMang(PS a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("--------------------------------------\n");
		printf("Vui long nhap vao phan so thu %d: \n", i+1);
		nhap1PS(a[i]);
	}
}

void xuatMang(PS a[], int n)
{
	printf("DS cac phan so trong mang: \n");
	for(int i=0; i<n; i++)
	{
		xuat1PS(a[i]);
		printf("\t");
	}
}

void tongMang(PS a[], int n)
{
	PS kq = a[0];
	for(int i=1; i<n; i++)
		kq = Cong2PS(kq, a[i]);
	
	printf("Tong cac phan so: ");
	xuat1PS(kq);
	printf("\n");
}

int main()
{
	PS a[MAX];
	int n;
	printf("Vui long nhap vao so luong PS: ");
	scanf("%d", &n);
	nhapMang(a, n);
	xuatMang(a, n);
	
	tongMang(a, n);
}
