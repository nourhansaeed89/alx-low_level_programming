#include "main.h"

/**
 * _atoi - function that Converts a string to an integer
 *
 * @s: string
 *
 * Return: The integer value
 */
int _atoi(char *s)
{
	unsigned int  x = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
	if (*s == '-')
	{
		sign *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
		x = x * 10 + (*s - '0');
	}
	else if (x > 0)
	{
		break;
	}
		i++;
	}

	return (x * sign);
}
