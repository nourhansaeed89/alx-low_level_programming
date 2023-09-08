#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_memset - used to fill memory
 * @s: pointer
 * @b: constant integer
 * @n: number of byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: an array of memory to print
 * @size: the size of the memory to print
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == NULL)

		return (NULL);

	_memset(m, 0, nmemb * size);

	return (m);
}

