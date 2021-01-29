/*!****************************************************************************
 * @file Exercise4-9a.c
 * @brief Answer to exercise 9a from chapter 4.
******************************************************************************/

#include <stdio.h>

int main(void)
{
	int n, triangularNumber;

	triangularNumber = 0;
	
	n = 1;

	while( n <= 200 )
	{
		triangularNumber += n;
		n++;
	}

	printf("The 200th triangular number is %i\n", 
			triangularNumber);

	return 0;

}


