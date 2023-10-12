
#include "main.h"
/**
 * get_endianness - function that checks the endianness
 *
 * Return: void
 *
 */
int get_endianness(void)
{

	unsigned long int n = 1;

	return (*(char *)&n);
}
