#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: input1
 * @s2: input2
 *
 * Return: result
 *
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = ((int)*s1 - 48) - ((int)*s2 - 48)
				break;
		}
		s1++;
		s2++;
	}
	return (result);
}
