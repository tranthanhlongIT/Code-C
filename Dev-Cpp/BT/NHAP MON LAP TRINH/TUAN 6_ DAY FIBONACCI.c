/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    int c, N, i;
    do
    {
        printf("Nhap N: ");
        scanf("%d", &N);
        if (N <= 0)
        printf("Nhap lai\n");
    }
    while (N <= 0);
    
    printf("In ra %d so dau trong day Fibonacci: %d %d ", N, a, b);
    
    for (i = 3; i <= N; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    
    return 0;
}
