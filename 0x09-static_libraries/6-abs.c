#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: The integer for which to compute the absolute value
 *
 * Description: Write a function that computes the absolute value of an integer
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
