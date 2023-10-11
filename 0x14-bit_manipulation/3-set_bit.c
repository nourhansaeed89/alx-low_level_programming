#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: input number
 * @index: index of bit
 *
 * Return: num of bit
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	if (index  >=  sizeof(n) * 8)
	return (-1);
	return (!!(*n |= 1L << index));
}
