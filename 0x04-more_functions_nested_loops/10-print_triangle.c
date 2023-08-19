#include "main.h"

/**
 * print_triangle - function that prints a triangle followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int l;
	int w;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (l = 1; w <= size; w++)
			{
				if ((l + w) <= size)
					_putchar(' ');
				else
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
