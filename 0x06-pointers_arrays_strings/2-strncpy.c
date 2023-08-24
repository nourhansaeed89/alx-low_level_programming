#include "main.h"

/**
 * _strncpy - function that Copies a string
 * @dest: input1
 * @src: input2
 * @n: Maximum number of bytes
 *
 * Return: return Pointer to the resulting string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
