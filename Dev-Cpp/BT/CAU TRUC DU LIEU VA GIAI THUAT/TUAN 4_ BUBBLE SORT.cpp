#include <stdio.h>

int DemSoSanh = 0;
int DemHoanVi = 0;

void TaoMang(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}

void HoanVi(int &a, int &b)
{
  int c = a;
  a = b;
  b = c;
}

void BUBBLESORT(int a[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = n - 1; j > i; j--)
    {
      DemSoSanh++;
      if (a[j] < a[j - 1])
      {
        DemHoanVi++;
        HoanVi(a[j], a[j - 1]);
      }
    }
  }
}

void InRa(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
}

int main()
{
  int a[100];
  int n; scanf("%d", &n);
  TaoMang(a, n);
  SapXep(a, n);
  printf("%d ", DemSoSanh);
  printf("%d\n", DemHoanVi);
  InRa(a, n);
  return 0;
}


