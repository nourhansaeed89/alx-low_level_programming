#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int num, mul, result;

	for (num = 0; num <= 9; num++)
	{
		for (mul = 0; mul <= 9; mul++)
	{
			result = num * mul;
	if (mul != 0)
		printf(", ");

	if (result >= 10)
	printf("%d", result);
	else
	printf(" %d", result);
	}
	printf("\n");
	}
}
