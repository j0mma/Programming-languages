/*!****************************************************************************
 * @file Program4-6.c
 * @brief Introducing the while statement
******************************************************************************/
// Program to introduce the while statement 

#include <stdio.h>

int main(void)
{
	int count = 1;

	while ( count <= 5 )
	{
		printf("%i\n", count);
		++count;
	}

	return 0;

}
