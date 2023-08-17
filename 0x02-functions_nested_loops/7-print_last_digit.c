#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit
 *
 * @n: input number
 *
 * Return: The value of the last digit.
 */

int print_last_digit(int n)
{
	int x;


	if (n < 0)
		x = -1 * (n % 10);
	else
		x = n % 10;
	_putchar(x + 48);

	return (x);
}
