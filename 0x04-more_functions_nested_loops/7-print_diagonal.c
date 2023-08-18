#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number
 */
void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
	for (i = 0; i < space; i++)
		_putchar(' ');

		_putchar('\\');
		_putchar('\n');

	space++;
	n--;
	}
}
