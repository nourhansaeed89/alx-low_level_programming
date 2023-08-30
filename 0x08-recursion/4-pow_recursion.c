#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function  returns the value of x raised to the power of y
 *
 * @x: input number
 * @y: power of number
 *
 * Return: If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (x < 0)
	{
		return (-1);
	}
	else if (x == 1)
	{
		return (x);
	}
	else if (x == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
