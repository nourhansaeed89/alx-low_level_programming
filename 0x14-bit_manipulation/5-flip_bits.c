#include "main.h"


/**
 *  flip_bits - func that flp bit
 *  @n: no of bit
 *  @m:2nd nom
 *
 *  Return: the number of bits you would need to flip to get from num to num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		if (x & 1ul)
		count++;
		x = x >> 1;
	}
	return (count);
}
