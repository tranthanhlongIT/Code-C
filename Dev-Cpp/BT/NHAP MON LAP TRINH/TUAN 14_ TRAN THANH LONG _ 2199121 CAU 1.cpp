/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <windows.h>
#include <conio.h>


int main()
{
	printf("In ra 20 so nguyen to la boi so cua 5: ");
	for (int i = 0; i <= 100; i += 5)
	{
		if (i == 0)
		{
			continue;
		}
		printf("%d\t", i);
	}
}
