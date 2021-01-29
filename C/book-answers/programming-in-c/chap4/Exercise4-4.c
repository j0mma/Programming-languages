/*!****************************************************************************
 * @file Exercise4-4.c
 * @brief Answer to exercise 4 from chapter 4.
******************************************************************************/

#include <stdio.h>

int main(void)
{

	int factorialNumber = 1; 

	printf(" n	n!\n");
	printf("----------\n");

	for (int i = 1; i < 10 ; i++)
	{
		factorialNumber *= i;
		printf(" %i	%i\n", i, factorialNumber);
	}

	return 0;

}


