#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9.
 *
 * Return:
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
	_putchar(i + 48);
	}
	_putchar('\n');
}
