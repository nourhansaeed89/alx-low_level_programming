#include "main.h"
/**
 * leet - encodes a string into 1337
 * @a: input
 * Return: encoded string
 */
char *leet(char *a)
{
	int i, j;
	char leetMap[] = "aAeEoOtTlL";
	char leetReplace[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
	for (j = 0; leetMap[j] != '\0'; j++)
	{
	if (a[i] == leetMap[j])
	a[i] = leetReplace[j];
	}
	}
	return (a);
}
