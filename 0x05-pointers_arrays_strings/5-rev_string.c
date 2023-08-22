#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: input string
 */
void rev_string(char *s)
{
	int l = 0;
	char storage;

for (l = 0; s[l] != '\0'; ++l)
	;
	for (int i = 0; i < l / 2; i++)
	{
	storage = s[i];
	s[i] = s[l - 1 - i];
	s[l - 1 - i] = storage;
	}
}
