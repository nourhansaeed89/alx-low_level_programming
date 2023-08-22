#include "main.h"

/**
 * puts2 -function that  Prints every other character of a string
 * @str: The input string
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
