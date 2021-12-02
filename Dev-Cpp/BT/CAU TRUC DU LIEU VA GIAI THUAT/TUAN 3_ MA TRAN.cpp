#include <stdio.h>


int main()
{
  int n, m, a[10][10];
  printf("Nhap n, m: ");
  scanf("%d", &n);
  scanf("%d", &m);
  
  printf("Nhap vao: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
    	scanf("%d", &a[i][j]);
    }
  }  
  
  printf("\nXuat ra: \n");
  for (int i = 0; i < n; i++)
  {
  	for (int j = 0; j < m; j++)
    {
    	printf("%d ", a[i][j]);
	}
		printf("\n");
  }  
}
