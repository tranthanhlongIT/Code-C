#include <stdio.h>

int maximum(int a[], int i, int n);
int minimum(int a[], int i, int n);


int main()
{
    int a[100], n, max, min;
    int i;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap %d phan tu: ", n);
	for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = maximum(a, 0, n);
    min = minimum(a, 0, n);

	printf("\n");
    printf("So nho nhat trong mang = %d\n", min);
    printf("So lon nhat trong mang = %d\n", max);

    return 0;
}



int maximum(int a[], int i, int n)
{
    int max;									// 			   n	=	6

    if (i >= n - 2)								//			   i	=	0	1	2	3	4	5
    {												
        if (a[i] > a[i + 1])						//		 	a[i]	=	4	8	2	9	5	3
            return a[i];							
        else									//	a[4]	maximum		1	8	2	9	5
            return a[i + 1];							
    }											//	a[3]	maximum		1	8	2	9
	
    max = maximum(a, i + 1, n);					//	a[2]	maximum		1	8	9
	
    if (a[i] > max)								//	a[1]	maximum		1	9
        return a[i];			
    else										//	a[0]	function	9
        return max;				
}


int minimum(int a[], int i, int n)
{
    int min;

    if(i >= n - 2)
    {
        if(a[i] < a[i + 1])
            return a[i];
        else
            return a[i + 1];
    }

    min = minimum(a, i + 1, n);

    if(a[i] < min)
        return a[i];
    else
        return min;
}
