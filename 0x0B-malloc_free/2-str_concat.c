#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find length
 *
 * @s: string
 *
 * Return: contents of s1, followed by the contents of s2, and null terminated
 */

int _strlen(char *s)
{
	int size;

	for (size = 0; size != '\0'; size++)
	;
		return (size);
}


/**
 *  *str_concat - function that concatenates two strings
 *
 *  @s1: input string1
 *  @s2: input string2
 *
 *  Return: contents of s1, followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int n1, n2, i;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
	s2 = "\0";
	n1 = _strlen(s1);
	n2 = _strlen(s2);
	m = malloc((n1 + n2) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (i = 0; i <= n1 + n2; i++)
	{
		if (i < n1)
			m[i] = s1[i];
		else
			m[i] = s2[i - n1];
	}
	m[i] = '\0';
	return (m);
}
