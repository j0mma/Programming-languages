/*!****************************************************************************
 * @file Exercise4-9c.c
 * @brief Answer to exercise 9c from chapter 4.
******************************************************************************/

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber;
	
	printf("What triangular number do you want ? ");
	scanf("%i", &number);

	triangularNumber = 0;
	
	n = 1;

	while (n <= number)
	{
		triangularNumber += n;
		n++;
	}

	printf("The %ith triangular number is %i\n", 
			number, triangularNumber);

	return 0;

}


