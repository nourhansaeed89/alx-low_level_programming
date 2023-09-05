#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - string size
 * @s: input string
 *
 * Return: Returns a pointer to a new string, or NULL if it fails
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * *argstostr - function that concatenates all the arguments
 *
 * @ac: int
 * @av: pointer
 * Return: Returns a pointer to a new string, or NULL if it fail
 */
char *argstostr(int ac, char **av)
{
	int i, j, x, y, result;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, j++)
		j += _strlen(av[i]);
	s = malloc(sizeof(char) * j + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++, y++)
			s[y] = av[i][x];
		s[y] = '\0';
		y++;
	}
	s[y] = '\0';
	return (s);
}

