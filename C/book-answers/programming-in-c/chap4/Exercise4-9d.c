/*!****************************************************************************
 * @file Exercise4-9d.c
 * @brief Answer to exercise 9d from chapter 4.
******************************************************************************/

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber, counter;
	
	counter = 1;

	while (counter <= 5)
	{	
		printf("What triangular number do you want ? ");
		scanf("%i", &number);
	
		triangularNumber = 0;			
		
		n = 1;

		while ( n <= number )
		{
			triangularNumber += n;
			++n;
		}

		printf("The %ith triangular number is %i\n\n", 
				number, triangularNumber);
		++counter;
	}

	return 0;

}


