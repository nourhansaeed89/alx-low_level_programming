#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: Write a program that prints 10 times
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
