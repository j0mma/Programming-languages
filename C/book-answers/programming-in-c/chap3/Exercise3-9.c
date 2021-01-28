/*!****************************************************************************
 * @file Exercise3-9.c
 * @brief Answer to exercise 9 from chapter 3.
******************************************************************************/

#include <stdio.h>

int main(void)
{
	int i,j, next_multiple;

	i = 365;
	j = 7;
	next_multiple = i + j - i % j;
	printf("For i = %i and j = %i, next even multiple = %i\n", i, j, next_multiple);
	
	i = 12258;
	j = 23;
	next_multiple = i + j - i % j;
	printf("For i = %i and j = %i, next even multiple = %i\n", i, j, next_multiple);
	
	i = 996;
	j = 4;
	next_multiple = i + j - i % j;
	printf("For i = %i and j = %i, next even multiple = %i\n", i, j, next_multiple);

	return 0;

}

