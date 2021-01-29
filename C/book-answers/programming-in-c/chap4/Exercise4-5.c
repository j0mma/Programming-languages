/*!****************************************************************************
 * @file Exercise4-5.c
 * @brief Answer to exercise 5 from chapter 4.
******************************************************************************/

#include <stdio.h>

int main(void)
{

	int n, twoToTheN;

	printf("TABLE OF POWERS OF TWO\n\n");
	printf(" n     2 to the n\n");
	printf("---    ---------------\n");

	twoToTheN = 1;
	
	for ( n = 0; n <= 10; n++)
	{
		printf("%2i	%i\n", n, twoToTheN);
		twoToTheN *= 2;
	}

	return 0;

}




