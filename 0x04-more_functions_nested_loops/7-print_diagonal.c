#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number
 */
void print_diagonal(int n)
{
	int x, space;

	if (n <= 0)

		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (space = 1 ; space <= x; space++)

			_putchar(' ');
			_putchar(92); /*is equal to '/' char*/;
			_putchar('\n');
		}
	}
}
