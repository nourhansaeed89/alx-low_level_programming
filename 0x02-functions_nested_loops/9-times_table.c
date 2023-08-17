#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int num, mul, result;

	for (num = 0; num <= 9; num++)
		_putchar(48);
	{
		for (mul = 1; mul <= 9; mul++)
	{
			result = num * mul;
			_putchar(',');
			_putchar(' ');
	if (result <= 9)
	_putchar(' ');
	else
	_putchar((result / 10) + 48);
	_putchar((result % 10) + 48);
	}
	_putchar('\n');
	}
}
