#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a function that copies the string pointed to by src
 *
 * @dest: the buffer pointed
 * @src: the string pointed
 *
 * Return: Return value the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\n');
	return (dest);
}
