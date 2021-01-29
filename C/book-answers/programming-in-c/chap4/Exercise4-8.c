/*!****************************************************************************
 * @file Exercise4-8.c
 * @brief Answer to exercise 8 from chapter 4.
******************************************************************************/

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber, counter;
	
	printf("How many triangular numbers do you want to calculate ? ");
	scanf("%i", &counter);

	for (int i = 1; i <= counter; ++i)
	{
		printf("What triangular number do you want ? ");
		scanf("%i", &number);

		triangularNumber = 0;
	
		for (n = 1; n <= number; n++)
			triangularNumber += n;

		printf("The %ith triangular number is %i\n\n", 
				number, triangularNumber);

	}

	return 0;

}


