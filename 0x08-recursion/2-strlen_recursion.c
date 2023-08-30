#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: input string
 *
 * Return: value of length
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s > '\n')
	{
		len += strlen_recursion(s + 1) + 1;

	}

	return (len);
}

