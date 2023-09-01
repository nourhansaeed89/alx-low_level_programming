#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks for lowercase character.
 *
 * * @c: The character to be checked
 *
 * Description: Write a function that checks for lowercase character
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

