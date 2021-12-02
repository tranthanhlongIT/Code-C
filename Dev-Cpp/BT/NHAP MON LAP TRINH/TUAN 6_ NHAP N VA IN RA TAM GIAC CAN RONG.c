/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    do
    {
    printf("Nhap N: ");
    scanf("%d", &n);
    if (n <= 0)
    printf("Nhap lai\n");
    }
    while (n <= 0);

   for (int i = 1; i <= n - 1; i++)                 // Dong dau tien //
   printf(" ");
   printf("*");
   printf("\n");
   
   for (int i = 2; i <= n - 1; i++)                 // Dong thu 2 den N - 1 //
   {
       for (int j = 1; j <= n - i; j++)
       printf(" ");
       printf("*");
       for (int j = 1; j <= 2 * i - 3; j++)
       printf(" ");
       printf("*");
       printf("\n");
   }
   
   for (int i = 1; i <= 2 * n - 1; i++)             // Dong N //
   printf("*");
   printf("\n");
 
    return 0;
}