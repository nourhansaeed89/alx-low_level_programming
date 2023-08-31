#include "main.h"
#include <stdio.h>
/**
 * wildcmp - function that compares two strings
 * @s1: input string1
 * @s2: input string2
 * Return: eturns 1 if the strings identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0')

		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
