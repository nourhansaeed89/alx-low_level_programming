#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings.
 * @dest: dest string
 * @src: input string
 *
 * Return: returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x]; x++)
		for (y = 0; src[y]; y++)
			dest[x] = src[y];

	return (dest);
}
