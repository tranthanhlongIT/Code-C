#include <stdio.h>
#define max 100


void NHAPSOLUONG(int &n)
{
  scanf("%d", &n);
}

void TAOMANG(int n, int a[])
{
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}  

int F(int a[], int i)
{
	if (i <= 0) return 0;
	return (a[i - 1] + F(a, i - 1));
}


int main()
{
  int n;
  int i;
  int a[max];
  NHAPSOLUONG(n);
  TAOMANG(n, a);
  printf("%ld", F(a, n));

  return 0;
}
