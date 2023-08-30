#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if the input a prime number, otherwise return 0
 *
 * @n: input number
 *
 * Return: returns 1 if the input a prime number, otherwise return 0
 */
#include <stdio.h>

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
 * is_divisible - returns 1 if the input a prime number, otherwise return 0
 *
 * @num: input number
 * @divisor: check num
 *
 * Return: returns 1 if the input a prime number, otherwise return 0
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
