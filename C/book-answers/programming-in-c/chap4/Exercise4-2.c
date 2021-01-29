/*!****************************************************************************
 * @file Exercise4-2.c
 * @brief Answer to exercise 2 from chapter 4.
******************************************************************************/

#include <stdio.h>

int main(void)
{
	printf("n	n^2\n");
	printf("-----------\n");

	for (int i = 1; i <= 10; ++i)
	{
		printf("%-i	%-i\n", i, i*i);
	}

	return 0;

}




