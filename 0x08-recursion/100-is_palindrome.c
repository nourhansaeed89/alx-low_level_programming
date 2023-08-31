#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_recursive - find the start and the is similar or not
 *
 * @s: input string
 * @start: start of the string
 * @end: end of string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s:input string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
int length = strlen(s);

return (is_palindrome_recursive(s, 0, length - 1));
}

