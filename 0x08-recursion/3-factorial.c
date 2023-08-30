#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: input number
 *
 * Return: If n is lower than 0, the function should return -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
