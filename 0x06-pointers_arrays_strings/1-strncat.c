#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes from src to concatenate
 *
 * Return: Pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int i;

	while (dest[x] != '\0')
	x++;

	for (i = 0; src[i] != '\0' && i < n; i++)
	dest[x++] = src[i];

	dest[x] = '\0';

	return (dest);
}
