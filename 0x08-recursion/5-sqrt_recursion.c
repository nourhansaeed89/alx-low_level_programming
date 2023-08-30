#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: input number
 *@s: squar root of num
 *
 * Return: If n does not have a natural square root, the function return -1
 */
int square(int n, int s);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - square root of a number
 * @n: input number
 * @s: square root of num
 *
 * Return: If n does not have a natural square root, the function return -1
 */
int square(int n, int s)
{
if (s * s == n)
	return (s);
	else if (s * s < n)
	return (square(n, s + 1));
	else
	return (-1);
}
