#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: input str
 * @c: character
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}
	return ('\0');
}
