#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: string1
 * @s2: string2
 * @n: number
 * Return: returned pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, L1, L2;

	/* check length */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* count lenght */
	for (L1 = 0; s1[L1] != '\0'; L1++)
		;

	for (L2 = 0; s2[L2] != '\0'; L2++)
		;
	/* memory recover */
	str = malloc(L1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/* copy1st string*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/* copy 2nd string*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
