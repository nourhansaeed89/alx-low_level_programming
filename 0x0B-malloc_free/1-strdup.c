#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * copy in memory
 * @str: input string
 *
 * Return: a pointer to the duplicated string or 0 if insufficient memory
 */
char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	;
	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			n[i] = str[i];
	}
	return (n);
}
