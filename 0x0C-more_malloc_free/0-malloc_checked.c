#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: checked input
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	*s = malloc(b);

	if (s == 0)
		exit(98);
	return (s);
}
