#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The input
 *
 * Return: The length
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
