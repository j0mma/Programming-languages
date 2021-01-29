/*!****************************************************************************
 * @file Exercise4-3.c
 * @brief Answer to exercise 3 from chapter 4.
******************************************************************************/

#include <stdio.h>

int main(void)
{

	int n, triangularNumber; 

	printf(" n	Triangular number\n");
	printf("-------------------------\n");

	for (int n = 0; n <= 50  ; n+= 5)
	{
		triangularNumber = n * (n+1) / 2;
		printf(" %i		%i\n", n, triangularNumber);
	}
	
	return 0;

}


