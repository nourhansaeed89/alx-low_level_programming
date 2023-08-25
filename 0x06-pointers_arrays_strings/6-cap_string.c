#include "main.h"
#include <stdio.h>

/**
 * is_separator - checks if a character is a word separator
 * @c: character to check
 * Return: 1 if c is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i]; i++)
	{
	if (c == separators[i])
	return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int capitalize = 1;

	for (int i = 0; s[i]; i++)
	{
	if (is_separator(s[i]))
	{
	capitalize = 1;
	}
	else if (capitalize && s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] -= 32;
	capitalize = 0;
	}
	else
	{
	capitalize = 0;
	}
	}

	return (s);
}
