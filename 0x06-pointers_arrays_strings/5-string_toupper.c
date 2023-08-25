#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str:  input string
 *
 * Return: return string value str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
