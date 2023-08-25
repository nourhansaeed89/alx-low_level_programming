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
	int x = 0;
	int y;
	/*find the size of array*/

	while (dest[x])
	{
		x++;
	}
	/*iterate the src array value without null byte*/
		for (y = 0; src[y]; y++)

		{	/*append src[y] to dest[x]*/
			dest[x++] = src[y];
		}

	return (dest);
}
