#include "main.h"
#include <stdio.h>

/**
 * is_divisible - Checks if num is divisible by divisor.
 * @num: The number to be checked.
 * @divisor: The divisor to check against.
 *
 * Return: 1 if num is divisible by divisor, 0 otherwise.
 */

int is_divisible(int num, int divisor)
{
	if (divisor == 1)
	{
	return (0);
	}

	if (divisor * divisor > num)
	{
	return (0);
	}

	if (num % divisor == 0)
	{
	return (1);
	}

	return (is_divisible(num, divisor + 1));
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}

	if (n <= 3)
	{
	return (1);
	}

	return (!is_divisible(n, 2));
}
