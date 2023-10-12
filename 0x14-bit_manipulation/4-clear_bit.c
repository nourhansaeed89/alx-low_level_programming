#include "main.h"
/**
 * clear_bit - function that clear bit
 * @n: no of bit
 * @index: index of bit
 * Return: Returns: 1 if it worked, or -1 if an error occurred
 */
	int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if  (*n & 1L << index)
	*n  ^= 1L << index;
	return (1);
}
