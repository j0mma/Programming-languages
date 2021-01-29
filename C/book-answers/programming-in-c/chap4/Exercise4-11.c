/*!****************************************************************************
 * @file Exercise4-11.c
 * @brief Answer to exercise 11 from chapter 4.
******************************************************************************/

#include <stdio.h>

int main(void)
{
	int number, sum = 0;

	printf("What is the number : ");
	scanf("%i", &number);

	do 
	{	
		sum += number % 10;
		number /= 10;
	} while( number != 0);

	printf("Sum of the digit is : %i\n", sum);

	return 0;
}


