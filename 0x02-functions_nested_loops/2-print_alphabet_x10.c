#include <stdio.h>
#include "main.h"
/**
 * main - entry  point
 *
 * Description: Write a program that prints 10 times
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int l;

	for (i = 0; i < 9; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	}
}
