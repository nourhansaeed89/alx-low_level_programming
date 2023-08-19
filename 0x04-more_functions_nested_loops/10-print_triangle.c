#include "main.h"

/**
 * print_triangle - function that prints a triangle followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, W;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (W = 1; W <= i; W++)
			{
				if ((i + W) <= size)
					_putchar(' ');
				else
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
