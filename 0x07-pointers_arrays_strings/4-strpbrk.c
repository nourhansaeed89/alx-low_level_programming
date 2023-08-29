#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: set of bytes
 *
 * Return: the first occurrence of a byte in s that matches , or NUll
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	char *a;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				a = &s[i];
				return (a);
			}
			j++;
		}
		i++;
	}
	return (0);
}
