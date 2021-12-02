/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   
    for (int i = 2; i <= 9; i++)
    {
        printf("Bang cuu chuong %d:\n", i);
        for (int j = 1; j <= 10; j++)
        printf("%d x %d = %d\n", i, j, i * j);
    }
    
    return 0;
}
