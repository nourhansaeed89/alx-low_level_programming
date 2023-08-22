#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line
 * @str: input string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 48);
		str++;
	}
	_putchar('\n');
}
