#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(1 + 48);
			}
			_putchar(48 + (j % 10));
		}
	_putchar('\n');
	}
}
